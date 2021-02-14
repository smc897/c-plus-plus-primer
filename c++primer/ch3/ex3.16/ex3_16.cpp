#include<iostream>
#include<vector>
#include<string>
#define ITERATOR_CHOICE 'i'
#define RANGE_CHOICE 'r'
using namespace std;
void printContentsS(vector<string>); //print vector of strings
void printContentsI(vector<int>); //print vector of ints
char iterOrRange;
int main(){
while(1){
 cout<<"Firstly, do you want an iterator or a range loop? Enter i or r"<<endl;
 cin>>iterOrRange;
 char choice;
 cout<<"Enter a choice of length and contents: \na) vector<int> v1"<<endl;
 cout<<"b) vector<int> v2(10)"<<endl;
 cout<<"c) vector<int> v3(10,42)"<<endl;
 cout<<"d) vector<int> v4{10}"<<endl;
 cout<<"e) vector<int> v5{10,42}"<<endl;
 cout<<"f) vector<string> v6{10}"<<endl;
 cout<<"g) vector<string> v7{10,\"hi\"}"<<endl;
 cout<<"h) exit"<<endl;
 cin>>choice;
 switch(choice){

 case('a'):{ 
 vector<int>v1;
 cout<<"v1 is:"<<v1.size();
 printContentsI(v1);
 break;
 }

 case('b'):{
  vector<int> v2(10);
  cout<<"v2 is:"<<v2.size();
  printContentsI(v2);
  break;
 }

 case('c'):{
  vector<int> v3(10,42);
  cout<<"v3 is:"<<v3.size();
  printContentsI(v3);
  break;
 }

 case('d'):{ 
 vector<int>v4{10};
 cout<<"v4 is:"<<v4.size();
 printContentsI(v4);
 break;
 }

 case('e'):{
  vector<int> v5{10,42};
  cout<<"v5 is:"<<v5.size();
  printContentsI(v5);
  break;
 }

 case('f'):{
  vector<string> v6{10};
  cout<<"v6 is:"<<v6.size();
  printContentsS(v6);
  break;
 }

 case('g'):{
  vector<string> v7{10,"hi"};
  cout<<"v7 is:"<<v7.size();
  printContentsS(v7);
  break;
 }

 case('h'):{
  return 0;
  }
 }
}
 return 0;
}

void printContentsS(vector<string> in){
 cout<<" ";

 if(iterOrRange=='r'){
  for(auto &i:in) cout<<i;
 }
 else if(iterOrRange=='i'){
  for(auto iter=in.begin();iter!=in.end()&&!in.empty();iter++) cout<<*iter;
 }
 else cout<<"wrong choice for type of sequencer."<<endl;
 cout<<endl;
}

void printContentsI(vector<int> in){
 cout<<" ";

 if(iterOrRange=='r'){
  for(auto &i:in) cout<<i;
 }
 else if(iterOrRange=='i'){
  for(auto iter=in.begin();iter!=in.end()&&!in.empty();iter++) cout<<*iter;
 }
 else cout<<"wrong choice for type of sequencer."<<endl;
 cout<<endl;
}

