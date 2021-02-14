#include<iostream>
using namespace std;
int main(){
 int *ip,i=25,&r=i;
 ip=&i;
 cout<<"*ip="<<*ip<<endl;
 cout<<"&r="<<r<<endl;
 return 0;
}
