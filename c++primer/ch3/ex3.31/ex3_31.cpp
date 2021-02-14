#include<iostream>
#include<vector>
using namespace std;
int main(){
 int arrSize=10,counter=0;
 int arr [arrSize]={};
 int arr1[arrSize]={};

 //fill and print indices, copy to another array
 for(auto &index:arr) {
  index=counter;
  arr1[counter]=index;
  cout<<index;
  counter++;
 }

 //display arr1
 cout<<"arr1:"<<endl;
 for(auto &index:arr1) cout<<index;
 cout<<endl;

 //same thing using vectors
 vector<int> v (10,0);
 counter=0;
 cout<<"vector is: "<<endl;
 for(auto iter=v.begin();iter!=v.end();iter++,counter++) {
  *iter=counter;
  cout<<*iter<<" ";
 }


 return 0;
}
