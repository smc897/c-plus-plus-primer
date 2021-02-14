#include <string>
#include <iostream>
using namespace std;
#ifndef SALESDATA_H
#define SALESDATA_H
#endif

//hold info for each sale
struct Sales_data{
 string bookNo;
 unsigned units_sold=0;
 double revenue=0.0;
 string isbn() const {return bookNo;}
 Sales_data& combine(const Sales_data&);
};

//get the data for class from cin
bool getdata(Sales_data*);

//display the class to cout
void display(Sales_data);

//assign the second class to the first class
void assign(Sales_data*,Sales_data*); 

//add the second to the first
void add(Sales_data*,Sales_data*);
