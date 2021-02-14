//read a string of chars and remove punctuation
#include<string>
#include<iostream>
using namespace std;

int main(){
 string s;
 getline(cin,s);
 for(auto &index:s){
  if(ispunct(index)) index=' ';
  }

 cout<<"entered string is: "<<s<<endl;

 //ex3.11, legal
 const string s1="Keep out!";
 for(auto &c:s1){/*...*/}
 return 0;
}
