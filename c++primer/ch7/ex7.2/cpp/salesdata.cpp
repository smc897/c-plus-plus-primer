//this program adds some books, and calcs the prices. 
#include "../h/salesdata.h"
int main(){
 Sales_data total;
 if(getdata(&total)){
  Sales_data trans;
  while(getdata(&trans)){
   if(total.isbn()==trans.isbn()) total=trans.combine(trans);
   else{
    display(total);
    assign(&total,&trans);
   } 
  }

  display(total);
  
}
else{
  //no input!!!
  cerr<<"no data?"<<endl;
  return -1;
 }

return 0;
}
