#include<string>
#include<iostream>
using namespace std;

bool comp(string,string);

int main(){
 string val,currval;
 bool isRepeated=false;
 do{
  cin>>val>>currval;
  if(comp(val,currval)) {
   cout<<currval<<" occurs twice."<<endl;
   isRepeated=true;
   break;
  }
 }while(1);

 if(!isRepeated) cout<<"no word was repeated."<<endl;

 return 0;
}

//compare the two strings with the first letter uppercase
bool comp(string str1,string str2){
 if(isupper(str1[0]) && isupper(str2[0])){
  if(str1==str2) return true;
 }
 return false;
}
