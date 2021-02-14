//this program prints how many times a number appears in a sequence. 
#include <iostream>
using namespace std;
int main(){
 int currVal=0, val=0;
 if(cin>>currVal){
  int cnt=1;
  while(cin>>val){
   if(val==currVal){
    ++cnt;

   }else{
    cout<<currVal<<" occurs "<<cnt<<" times."<<endl;
    currVal=val;
    cnt=1;
   } //end of else
  } //end of while cin

  cout<<currVal<<" appears "<<cnt<<" times."<<endl;
 } //end of if cin>>currVal
 return 0;
}
