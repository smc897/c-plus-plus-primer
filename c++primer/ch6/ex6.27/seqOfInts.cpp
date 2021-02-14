//take a list of ints, print the sum
#include<initializer_list>
#include<iostream>
using namespace std;

int sum(initializer_list<int>);

int main(){
 cout<<"The sum of 5, 16, and 7 is: "<<sum({5,16,7})<<endl;
 return 0;
}

//sum
int sum(initializer_list<int> il){
 int res;
 for(auto& index:il) res+=index;
 return res;
}

