//read ints and strings from cin and store in a vector
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){

 //menu
 int choice;
 cout<<"Enter :\n 1) ints\n 2) strings exit to quit"<<endl;
 cin>>choice;

 if(choice==1){

 vector<int> v1;
 int i;
 while(cin>>i) v1.push_back(i);
 for(auto &index:v1) cout<<index<<endl; 
}

 else if(choice==2){
  vector<string> v1;
  string s;
  while(cin>>s){
   if(s!="exit") v1.push_back(s);
   else break;
  }

  for(auto &index:v1) cout<<index<<endl;
 }
 return 0;
}
