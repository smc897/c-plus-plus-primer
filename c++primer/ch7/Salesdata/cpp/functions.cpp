#include "../h/salesdata.h"

//get data from cin
bool getdata(Sales_data* sd){
 string num;
 unsigned usold;
 double revenue;
 if(cin>>num){
  cin>>usold>>revenue;
  (*sd).setBookNo(num);
  (*sd).setUnitsSold(usold);
  (*sd).setRevenue(revenue);
  return 1;
 }
 else return 0;
}

//display the class
void display(Sales_data sd){
 cout<<"class has members:"<<endl;
 cout<<sd.isbn()<<sd.getUnitsSold()<<sd.getRevenue()<<endl;
}

//assign the second class to the first class
void assign(Sales_data* sd1,Sales_data* sd2){
 (*sd1).setBookNo((*sd2).isbn());
 (*sd1).setUnitsSold((*sd2).getUnitsSold());
 (*sd1).setRevenue((*sd2).getRevenue());
}

//add the second to the first
void add(Sales_data* sd1,Sales_data* sd2){
 (*sd1).setUnitsSold((*sd1).getUnitsSold()+(*sd2).getUnitsSold());
 (*sd1).setRevenue((*sd1).getRevenue()+(*sd2).getRevenue());
}

//combine function
Sales_data& Sales_data::combine(const Sales_data& rhs){
 units_sold+=rhs.units_sold;
 revenue+=rhs.revenue;
 return *this;
}

