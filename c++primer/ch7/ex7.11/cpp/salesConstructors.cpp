#include "../../Salesdata/h/salesdata.h"
//different constructors for sales data
int main(){
 Sales_data sd; //default
 cout<<"sd:"<<sd.isbn()<<endl;
 Sales_data sd1("1234"); //book no init
 cout<<"sd1:"<<sd1.isbn()<<endl;
 Sales_data sd2("1234",3,4.5); //all init
 cout<<"sd2:"<<sd2.isbn()<<endl;
 Sales_data sd3(cin);
 cout<<"sd3:"<<sd3.isbn()<<endl;
 return 0;
}
