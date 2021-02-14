#include <iostream>
using namespace std;
//print all integers between upper and lower bounds.
int main(){
 int a,b;
 cout<<"Enter upper and lower bounds for number list: "<<endl;
 cin>>a>>b;

 while(a>=b){
  cout<<a<<endl;
  a--;
 }
 return 0;
}
