#include "server.h"

std::string Request(){
Customer_details data = details();
 customer::Customer_details details;
details.set_name(data.name);
details.set_phone_no(data.phone_no);
details.set_account_no(data.Account_no);
details.set_curr_balance(data.Curr_balance);
details.set_type(static_cast<customer::Account_type>(data.type));

details.mutable_address()->set_door_no(data.address.door_no);
details.mutable_address()->set_street_name(data.address.street_name);
details.mutable_address()->set_city_name(data.address.city_name);
details.mutable_address()->set_pincode(data.address.pincode);
details.mutable_address()->set_district(data.address.district);
details.mutable_address()->set_state(data.address.state);
std::string response;
details.SerializeToString(&response);
return response;
}