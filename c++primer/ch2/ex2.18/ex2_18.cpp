#include <iostream>
using namespace std;
int main(){
 int a=3,b=6,c=10;
 int* pi=&a;
 int* pi1=&b;
 cout<<"pi="<<*pi<<endl;
 pi=&b;
 cout<<"pi changed="<<*pi<<endl;

 //change value in pointer
 *pi=c;
 cout<<"pi value changed="<<*pi<<endl;
 return 0;
}
