#include<iostream>
using namespace std;
int main(){
 double x[100],y[100],z[100];
 double data[10]; 
 int thresh=3;
 int index;
 bool flag;
 int stepcount;
 for(index=0,flag=false,stepcount=0;index<10;index++){
  if(data[index]>thresh&!flag){
   stepcount++;
   flag=true;
  }
  else if(data[index]<=thresh) flag=false;
 }
 cout<<"step count is: "<<stepcount<<endl;
}
