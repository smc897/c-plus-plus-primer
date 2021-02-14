#include <string>
#include <iostream>
#include "../../Salesdata/h/salesdata.h"
using namespace std;

#ifndef PERSON
#define PERSON
#endif

struct Person{
 string name="";
 string address="";
 Sales_data total;
 Sales_data trans;
 string getName() {return name;}
 string getAddress() {return address;}
 istream& read(istream& is,Sales_data&item);
 ostream& print(ostream& os,const Sales_data& item);
 Sales_data add(const Sales_data& lhs,const Sales_data& rhs);
 istream& readP(istream& is);
 ostream& printP(ostream& os);
};
