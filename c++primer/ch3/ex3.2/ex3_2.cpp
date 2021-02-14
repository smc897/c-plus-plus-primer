#include<iostream>
#include<string>
using std::cin;
using std::string;
using std::cout;
using std::endl;
using std::cerr;

int main(){
 string in,in1;
 int choice;
 
 cout<<"Enter : \n1) echo line\n2) echo word\n3) are they equal?\n4) are they the same length?\n5) read some strings and echo,exit terminates."<<endl;
 cin>>choice;

 if(choice==1){ 
  while(getline(cin,in)) cout<<in<<endl;
 }
 else if(choice==2){
  while(cin>>in) cout<<in<<endl;
 }
 else if(choice==3){
  cin>>in>>in1;
  if(in==in1) cout<<"strings are equal"<<endl;
  else {
   cout<<"strings are not equal"<<endl;
   if(in1>in) cout<<"second one is larger."<<endl;
   else cout<<"first one is larger."<<endl;
  }
 }
 else if(choice==4){
  cin>>in>>in1;
  if(in1.size()==in.size()) cout<<"strings are the same length"<<endl;
  else {
   if(in1.size()>in.size()) cout<<"second one is longer."<<endl;
   else cout<<"first one is longer."<<endl;
  }
 }

 else if(choice==5){
  in1="";
  while(cin>>in){
   if(in!="exit")
    in1+=in+" ";
   else break;
  }
  cout<<"string is: "<<in1<<endl;
 }

  else{
  cerr<<"enter 1 or 2."<<endl;
  return -1;
 }

 return 0;
}
