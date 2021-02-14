//ordered from left to right
#include<iostream>
using namespace std;
int main(){
 cout<<"first one is: "<<(~'q'<<6);
 cout<<"second one is: "<<((~'q')<<6)<<endl;
 cout<<"third one is: "<<(~('q'<<6))<<endl; 




 unsigned long ul1=3,ul2=7;
 cout<<(ul1&ul2); //gives 3
 cout<<(ul1|ul2); //gives 7
 cout<<" "<<(ul1&&ul2); //gives true
 cout<<" "<<(ul1||ul2); //gives true

return 0;
}



