#include<iostream>
#include<string>

enum Account_type{
  unknown = 0,
 savings = 1,
 salary = 2,
 Bussiness = 3,
 Current = 4
};

struct Bank_details{
//int64_t ac_no;
int64_t IFSCcode;
std::string branch;
};

struct Address
{
std::string door_no;
std::string street_name;
std::string city_name;
int64_t pincode;
std::string district;
std::string state; 
};

struct Customer_details{
 std::string name ; 
 int64_t phone_no;
  int64_t Account_no;
  double Curr_balance;
  Account_type type;
  Bank_details details;
  Address address;
};