#include <string>
#include <iostream>
using namespace std;
#ifndef SALESDATA_H
#define SALESDATA_H
#endif

//hold info for each sale
class Sales_data{
 public:
  //constructors
 Sales_data()=default;
 Sales_data(const string& s): bookNo(s){}
 Sales_data(const string& s,unsigned n,double p): bookNo(s),units_sold(n),revenue(p*n){}
 Sales_data(istream& is){is>>bookNo>>units_sold>>revenue;}
 string isbn() const {return bookNo;}
 void setBookNo(string b) {bookNo=b;}
 Sales_data& combine(const Sales_data&); 
 double avg_price() const{return revenue/units_sold;}
 unsigned getUnitsSold() const{return units_sold;}
 void setUnitsSold(unsigned s) {units_sold=s;}
 double getRevenue() const {return revenue;}
 void setRevenue(double rev) {revenue=rev;}
 private:
  string bookNo;
  unsigned units_sold=0;
  double revenue=0.0;
};

//get the data for class from cin
bool getdata(Sales_data*);

//display the class to cout
void display(Sales_data);

//assign the second class to the first class
void assign(Sales_data*,Sales_data*); 

//add the second to the first
void add(Sales_data*,Sales_data*);
