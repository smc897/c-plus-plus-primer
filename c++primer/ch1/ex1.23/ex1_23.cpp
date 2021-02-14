//this program reads several transactions of books and counts how many transactions occur for every ISBN.
#include "..//Sales_item.h"
#include <iostream>
using namespace std;
int main(){
 Sales_item currVal,val;

 if(cin>>currVal){
  int cnt=1;
  while(cin>>val){
   if(val.isbn()==currVal.isbn()){
    cnt++;
   }
   else{
    cout<<currVal.isbn()<<" occurs "<<cnt<<" times."<<endl;
    currVal=val;
    cnt=1;
   }
  }
   cout<<currVal.isbn()<<" occurs "<<cnt<<" times."<<endl;
 }

 return 0;
}
