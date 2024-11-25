#include "customer_info.h"


void display_newly_added_customer(std::string response){
customer::Customer_details data;
if(!data.ParseFromString(response)){
    std::cerr<<"Failed to parse"<<std::endl;
}    
std::cout<<"Customer name : "<<data.name()<<std::endl;
std::cout<<"Customer phone no : "<<data.phone_no()<<std::endl;
std::cout<<"Customer Account no : "<<data.account_no()<<std::endl;
std::cout<<"Customer curr balance : "<<data.curr_balance()<<std::endl;
std::cout<<"Customer Account type : "<<data.type()<<std::endl;
auto bank_details = data.details();
std::cout<<"Bank IFSCCode : "<<bank_details.ifsccode()<<std::endl;
std::cout<<"Bank Branch : "<<bank_details.branch()<<std::endl;
auto address = data.address();
std::cout<<"Customer address : "<<std::endl;
std::cout<<address.door_no()<<std::endl;
std::cout<<address.street_name()<<std::endl;
std::cout<<address.city_name()<<std::endl;
std::cout<<address.pincode()<<std::endl;
std::cout<<address.district()<<std::endl;
std::cout<<address.state()<<std::endl;
}

void run(){
    std::string response = Request();
    display_newly_added_customer(response);
    google::protobuf::ShutdownProtobufLibrary();
}