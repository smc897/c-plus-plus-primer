//init an array to all 8's
#include<iostream>
#define SIZE 10
using namespace std;
int main(){
 int arr1 [SIZE];
 int* end=arr1+10;
 int counter=0;
 for(int* ptr=arr1;ptr!=end;ptr++,counter++) {
  *ptr=8;
  cout<<arr1[counter];
 }
 cout<<endl;
 return 0;
}
