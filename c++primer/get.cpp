#include<iostream>
#include<memory>
using namespace std;
int main(){
 unique_ptr<int[]> array(new int[5]);
 array[0]=4;
 cout<<array.get();
 return 0;
}

