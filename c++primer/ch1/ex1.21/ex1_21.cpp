//this program reads two sales_item objects with the same ISBN and sums them. 
#include "..//Sales_item.h"
#include <iostream>
using namespace std;
int main(){
 Sales_item item1,item2;

 cout<<"Enter book 1:"<<endl;
 cin>>item1;
 cout<<"Enter book 2:"<<endl;
 cin>>item2;
 //check if they are the same
 if(item1.isbn()==item2.isbn()){
  cout<<item1+item2<<endl;
  return 0;
 }
 else {
  cerr<<"data must have the same ISBN's."<<endl;
  return -1;
 }
}
