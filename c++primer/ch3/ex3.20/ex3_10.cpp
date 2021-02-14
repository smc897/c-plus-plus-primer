// read some ints, print sums of each adjacent element
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
 
 for(auto index=i.begin();index!=(i.end()-1);index++){
  cout<<(*index)+*(index+1)<<" ";
 }
 cout<<endl;
 return 0; 
}
