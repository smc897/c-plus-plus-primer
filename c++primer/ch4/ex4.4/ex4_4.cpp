//show the value of the expressions
#include<iostream>
using namespace std;
int main(){
 double alpha=12/3*(4+5)*15+24%4/2;
 cout<<alpha;
 double ex1=-90+(double)21/(double)5;
 cout<<" "<<ex1;

 //show if an int is even or odd
 int test=20;
 if(!(test%2)) cout<<"test is even"<<endl;
 else cout<<"test is odd"<<endl;

 //get four values, test if a>b>c>d
 int a=6, b=5,c=4,d=3;
 if((a>b)&&(b>c)&&(c>d)) cout<<"values are correct."<<endl;

 //postfix and prefix increment
 int val [2]={5,6};
 int* ptr=val;
 cout<<"ptr value is: "<<*ptr++<<endl;
 cout<<"ptr new value is:"<<*ptr<<endl;

 //which of these are correct?
 if(ptr!=0 && *ptr++){} //correct
 
 int ival=5;
 if(ival && ++ival){cout<<"ival is valid"<<endl;}

 /

 return 0;
}
