//init some vectors
#include<vector>
#include<iostream>
using namespace std;
void printVec(vector<int>);
int main(){
 vector<int> v1(10,42);
 vector<int> v2{42,42,42,42,42,42,42,42,42,42};
 vector<int> v3={42,42,42,42,42,42,42,42,42,42};

 cout<<"here are the vectors:"<<endl;
 printVec(v1);
 printVec(v2);
 printVec(v3);
 return 0;
}

void printVec(vector<int> in){
 for(auto &i:in) cout<<" "<<i;
 cout<<endl;
}
