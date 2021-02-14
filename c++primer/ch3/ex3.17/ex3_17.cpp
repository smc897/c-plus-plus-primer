//read words from cin, change to uppercase, print 8 words to a line, say exit to quit.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void display(vector<string>);
int main(){
 vector<string> v;
 string s;
 cout<<"enter some strings, type exit to quit."<<endl;
 while(cin>>s){
  if(s!="exit"){
   v.push_back(s);
   }
  else break;
 }

 //change all letters to uppercase
 for(auto &index:v){
  for(auto &index1:index){
   toupper(index[index1]);
  }
 }

 //print 8 words to a line
 display(v);
 return 0; 
 }

 void display(vector<string> v){
  int i=0;
  for(auto &index:v){
   cout<<" "<<index;
   i++;
   if(i%8==0 && i!=0) cout<<endl;
  }
 }
