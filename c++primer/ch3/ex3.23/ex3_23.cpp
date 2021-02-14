//we make a vector with 10 ints, then double all there values.
#include<iostream>
#include<vector>
using namespace std;
void getData(vector<int>*);
void doubleV(vector<int>*);
void printV(vector<int>);
int main(){
 vector<int> v;
 getData(&v);
 doubleV(&v);
 printV(v);
 return 0;
}

//get 10 integers from cin, put into v
void getData(vector<int>* v){
 int i=0;
 int val;
 while(i<10){
  if(cin>>val) {
   (*v).push_back(val);
   i++;
  }
 } 
}

//double all ten elements in v
void doubleV(vector<int>* v){
 for(auto iter=(*v).begin();iter!=(*v).end();iter++) (*iter)*=2;
}

//print out doubled values
void printV(vector<int> v){
 cout<<"The doubled values are: "<<endl;
 for(auto iter=v.begin();iter!=v.end();iter++) cout<<*iter<<" ";
 cout<<endl;
}
