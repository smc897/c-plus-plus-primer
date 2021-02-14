#include "../../Person/h/Person.h"
int main(){
 Person p;

 if(p.readP(cin)){
 if(p.read(cin,p.total)){
  Sales_data trans;
  while(p.read(cin,p.trans)){
   if(p.total.isbn()==p.trans.isbn()) p.total=p.add(p.total,p.trans);
   else{
    p.print(cout,p.total);
    assign(&(p.total),&(p.trans));
   } 
  }

  p.print(cout,p.total);
  p.printP(cout);
}
else{
  //no input!!!
  cerr<<"no data?"<<endl;
  return -1;
 }
}
else{
 //no input for person
 cerr<<"no person data!!!"<<endl;
 return -1;
}
return 0;
}
