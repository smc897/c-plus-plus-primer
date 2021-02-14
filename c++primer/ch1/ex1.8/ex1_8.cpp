#include<iostream>
using namespace std;
int main(){
 cout<<"/*"; //works
 cout<<"*/"; //works
 cout<< /* "*/" */"; //works
 cout<< /* "*/" /* "/*" */; //works
 return 0;
}

