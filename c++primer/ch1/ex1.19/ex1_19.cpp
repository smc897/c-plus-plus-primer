//this program prints all integers in the range between two inputted numbers.
#include<iostream>
using namespace std;
int main(){
 int in1,in2,high,low;
 cout<<"Enter two numbers: "<<endl;
 cin>>in1>>in2;
 
 //assign in1 and in2 to high and low, based on which is higher.
 if(in1>in2){
  high=in1;
  low=in2;
 }
 else{
  high=in2;
  low=in1;
 }

 for(int i=high;i>=low;i--){
  cout<<i<<endl;
 }

 return 0;
}
