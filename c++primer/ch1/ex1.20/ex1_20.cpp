//this program reads a set of book sale transactions, and writes each transaction to standard output
#include <iostream>
#include "Sales_item.h"
using namespace std;
int main(){
 Sales_item book;
 while(cin>>book)
  cout<<book<<endl;
 return 0;
}
