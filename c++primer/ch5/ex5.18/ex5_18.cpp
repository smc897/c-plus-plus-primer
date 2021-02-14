#include<iostream>
#include<string>
using namespace std;
int main(){
 string str1,str2;
 do{
  cout<<"enter two strings, say exit to exit."<<endl;
  cin>>str1>>str2;
  if(str1<str2) cout<<"first string is less."<<endl;
  else if(str1>str2) cout<<"second string is less."<<endl;
  else if(str1==str2) cout<<"strings are equal."<<endl;
 }while(str1!="exit");
 cout<<"goodbye";
 return 0;
}
