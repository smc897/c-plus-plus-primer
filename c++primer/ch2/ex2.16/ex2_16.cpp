//check if it is invalid
#include<iostream>
using namespace std;
int main(){
 int i=10, &r1=i;
 double d=4.5, &r2=d;
 //r2=3.14; //valid
 //r2=r1; //valid
// i=r2; //valid, loses data
 r1=d; //valid, loses data
 cout<<r1<<endl;
}
