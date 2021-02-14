#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;
 int counter=0;
 while(counter<10) {
  v.push_back(counter);
  counter++;
 }

 for(auto iter=v.begin();iter!=v.end();iter++){
  int result=((*iter)%2)?1:0;
  if(result) (*iter)*=2;
  cout<<" "<<*iter;
 }

 cout<<endl;
}
