//compute the absolute value of a number
#include<iostream>
using namespace std;

double absol(double);

int main(){
 double val;
 cout<<"enter a value to get abs."<<endl;
 cin>>val;
 cout<<"the absolute value is: "<<absol(val)<<endl;

 return 0;
}






//computes absolute value of in
double absol(double in){
 if(in<0) return -1*in;
 else return in;
}
