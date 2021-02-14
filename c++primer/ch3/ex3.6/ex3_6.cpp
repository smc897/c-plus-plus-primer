//this program converts a string to X
#include<string>
#include<iostream>
using namespace std;
int main(){

 //use auto
 string str="Hello world!!!";
 for(auto &x:str) x='X';
 cout<<str<<endl;

 //use char
 string str2="HELLO WORLD!!!";
 for(char &x:str2) x='X';
 cout<<str2<<endl;

 //use a while loop
 string str3="HELLO WORLD!!!";
 int i=0;
 while(i<str3.size()){
  str3[i]='X';
  i++;
 }
 cout<<str3<<endl;

 //use a for loop
 string str4="FACEBOOK";
 for(i=0;i<str4.size();i++) str4[i]='X';
 cout<<str4<<endl; 

 return 0;
}
