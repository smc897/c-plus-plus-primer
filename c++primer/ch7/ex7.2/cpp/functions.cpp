#include "../h/salesdata.h"

//get data from cin
bool getdata(Sales_data* sd){
 if(cin>>(*sd).bookNo){
  cin>>(*sd).units_sold>>(*sd).revenue;
  return 1;
 }
 else return 0;
}

//display the class
void display(Sales_data sd){
 cout<<"class has members:"<<endl;
 cout<<sd.bookNo<<sd.units_sold<<sd.revenue<<endl;
}

//assign the second class to the first class
void assign(Sales_data* sd1,Sales_data* sd2){
 (*sd1).bookNo=(*sd2).bookNo;
 (*sd1).units_sold=(*sd2).units_sold;
 (*sd1).revenue=(*sd2).revenue;
}

//add the second to the first
void add(Sales_data* sd1,Sales_data* sd2){
 (*sd1).units_sold+=(*sd2).units_sold;
 (*sd1).revenue+=(*sd2).revenue;
}

//combine function
Sales_data& Sales_data::combine(const Sales_data& rhs){
 units_sold+=rhs.units_sold;
 revenue+=rhs.revenue;
 return *this;
}
