#include<iostream>
using namespace std;
int main(){
 int a,b,c;

 cout<<"enter a and b"<<endl;
 cin>>a>>b;

try{
 if(!b) throw runtime_error("we have a divide by zero error.");
 cout<<"division a/b is: "<<a/b<<endl;
}
catch(runtime_error e){
 cout<<"we have an exception: "<<e.what()<<endl;
}

 return 0;
}
