#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
 string s="Hello world!!!";
 string s1="Hi Dumbass!!!";
 if(s==s1) cout<<"strings are equal"<<endl;
 else cout<<"strings are not equal"<<endl;

 //compare two C char strings
 char str1[20]="hello world!!!";
 char str2[20]="green stuff";
 if(!strcmp(str1,str2))cout<<"strings are equal!!!!"<<endl;
 else cout<<"strings are not equal"<<endl;

 //concatenate two strings
 char str3[40]={};
 strcpy(str3,str1);
 strcat(str3,str2);
 for(auto &c:str3) cout<<c;
 cout<<endl;
 return 0;
}
