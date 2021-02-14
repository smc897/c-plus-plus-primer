//init a vector from an array of ints
#include<iostream>
#include<vector>
#define SIZE 5
using namespace std;
int main(){
 int arr1[SIZE]={1,3,34,4,5};
 int arr2[SIZE]={};
 size_t counter;
 vector<int> v;

 //init vector
 for(auto &index:arr1)
  v.push_back(index);

 //display vector
 counter=0;
 for(auto iter=v.begin();iter!=v.end();iter++) {
  cout<<*iter<<" ";
  arr2[counter]=*iter;
  counter++;
 }
  cout<<endl;

 //display array
 for(auto &index:arr2) cout<<index<<" ";
 cout<<endl;

 return 0;
}
