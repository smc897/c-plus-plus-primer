//this program squares 42
#include<iostream>
using namespace std;
int main(){
 int i=42;
 int* p1=&i;
 *p1=(*p1)*(*p1);
 cout<<"p1 is:"<<*p1<<endl;
 return 0;
}
