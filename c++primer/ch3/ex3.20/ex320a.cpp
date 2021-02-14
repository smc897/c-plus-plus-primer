// read some ints, print sums of each front to back elements
#include<vector>
#include<iostream>
using namespace std;
int main(){

 vector<int> i;
 int i1;
 cout<<"enter some integers, type e to exit."<<endl;
 while(cin>>i1){
  if(!isalpha(i1)) i.push_back(i1);
  else break;
 }

 for(int index=0;index<i.size();index++){
  cout<<i[index]+i[i.size()-index-1]<<" ";
 }
 cout<<endl;
 return 0; 
}
