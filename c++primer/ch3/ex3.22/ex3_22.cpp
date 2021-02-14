//update the paragraph to all uppercase
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isParBreak(string);
void convertToUpperCase(string*);
int main(){
 vector<string>strings;
 string s;
 while(getline(cin,s)){
  if(!isParBreak(s))
   strings.push_back(s);
  else break;
 }

 for(auto iter=strings.begin();iter!=strings.end();iter++){
  string tmp=*iter;
  convertToUpperCase(&tmp);
  *iter=tmp;
  cout<<*iter<<endl;
 }
 cout<<endl;
 return 0;
}

//converts all alpha chars to upper case in a string
void convertToUpperCase(string* str){
 for(auto &c:(*str)){
  if(isalpha(c)) c=toupper(c);
 }
}

//checks for a paragraph break
bool isParBreak(string str){
 for(auto &c:str){
  if(c!=' ') return false;
 }

 return true;
}
