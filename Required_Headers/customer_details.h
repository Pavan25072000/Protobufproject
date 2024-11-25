#include "message_contains.h"
#include <iostream>
inline Customer_details details(void){
Customer_details details;
details.name = "pavan";
details.Account_no = 987654321;
details.phone_no = 987654321;
details.Curr_balance =  67542.0;
details.details.IFSCcode = 34567;
details.details.branch = "Banglore";
details.type = Account_type::salary;
details.address.door_no = "10-4347";
details.address.street_name = "srinivasa street";
details.address.city_name = "banglore";
details.address.pincode = 560036;
details.address.district = "Banglore";
details.address.state = "Karnataka";
return details;
}