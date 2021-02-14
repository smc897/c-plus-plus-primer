#include<iostream>
using namespace std;
string global_str;
int global_int;
int main(){
 int local_int;
 string local_str;
 cout<<"global string : "<<global_str<<endl;
 cout<<"global int: "<<global_int<<endl;
 cout<<"local_int: "<<local_int<<endl;
 cout<<"local_str: "<<local_str<<endl;
 return 0;
}
