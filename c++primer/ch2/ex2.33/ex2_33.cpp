#include<iostream>
using namespace std;
int main(){
 int i=0, &r=i;
 auto a=r; 
 const int ci=i, &cr=ci;
 auto b=ci;
 auto c=cr;
 auto d=&i;
 auto e=&ci;
 auto &g=ci;

 //try these
 a=42; //valid
 b=42; //valid
 c=42; //valid
 //d=42; invalid
 //e=42; invalid
 //g=42; invalid
  return 0;
}
