#include<iostream>
using namespace std;
int main(){
 int a=4;
 const int i=42;
 auto j=i;
 const auto &k=i;
 auto *p=&i; //pointer
 const auto j2=i, &k2=i;

 j=42; //valid
 //k=65; invalid
 //*p=45; invalid
 //j2=46; //invalid
 //k2=67; //invalid
 //p=&a; //valid
 return 0;
}
