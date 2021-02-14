#include<iostream>
using namespace std;
int main(){
 cout<<"size of int: "<<sizeof(int)<<endl;
 cout<<"size of float: "<<sizeof(float)<<endl;
 cout<<"size of long: "<<sizeof(long)<<endl;
 cout<<"size of char"<<sizeof(char)<<endl;

 int x[10];
 int* p=x;
 cout<<sizeof(x)/sizeof(*x)<<endl;
 cout<<sizeof(p)/sizeof(*p)<<endl;

 float fval;
 unsigned int ui=5;
 int ival=-4;
 fval=ui-ival*1.0;
 cout<<fval;
 fval=5.6;
 double dval;
 dval=ui*fval;
 cout<<" "<<dval;
 ui=static_cast<double>(fval-ival);
 cout<<"fval-ival finally is: "<<static_cast<double>(fval-ival)<<endl;
 cout<<"ui finally is:"<<static_cast<double>(ui)<<endl;

 //convert to new style casts
 void* pv;
 const string* ps;
 pv=static_cast<void*>(const_cast<string*>(ps));
 int i;
 char* pc;
 i=static_cast<int>(*pc);
 double d;
 pv=static_cast<void*>(&d);
 pc=static_cast<char*>(pv);
 return 0;
}
