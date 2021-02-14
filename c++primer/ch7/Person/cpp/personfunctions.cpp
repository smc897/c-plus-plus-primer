#include "../h/Person.h"

//read from istream
istream& Person::read(istream& is,Sales_data& item){
 double price=0;
 string num;
 double usold;
 is>>num>>usold>>price;
 item.setRevenue(price*item.getUnitsSold());
 item.setBookNo(num);
 item.setUnitsSold(usold);
 return is;
}

//print to ostream
ostream& Person::print(ostream& os,const Sales_data& item){
 os<<item.isbn()<<" "<<item.getUnitsSold()<<" "<<item.getRevenue()<<" "<<item.avg_price();
 return os;
}

//add two sales datas together
Sales_data Person::add(const Sales_data& lhs,const Sales_data& rhs){
 Sales_data sum=lhs;
 sum.combine(rhs);
 return sum;
}

//read a person into P
istream& Person::readP(istream& is){
 if(is>>name){
  is>>address;
  return is;
 }
 else {
  cerr<<"no data!!!"<<endl;
  return is;
 }
}

//output person to stream
ostream& Person::printP(ostream& os){
 os<<name<<" "<<address;
 return os;
}
