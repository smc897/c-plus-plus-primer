#include<iostream>
using namespace std;
int main(){
 int grade=75;
 string pf1;
 string pf=grade>80?"high pass":(grade(grade>60?"pass":"fail"));
 cout<<pf;

 //use if statements to determine pass or fail.
 // if(grade>80) pf1="high pass";
 //else if(grade>60)pf1="pass";
 //else pf1="fail";
 //cout<<pf1;
}
