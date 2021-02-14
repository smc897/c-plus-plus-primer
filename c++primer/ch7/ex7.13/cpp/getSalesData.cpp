#include "../h/getSalesData.h"
int main(){
 Sales_data total(cin);
 Sales_data trans;
 Person p;
 while(p.read(cin,trans)){
  if(total.isbn()==trans.isbn()) total.combine(trans);
  else{
   p.print(cout,total);
   assign(&total,&trans);
  }
 }
 p.print(cout,total);

 return 0;
}
