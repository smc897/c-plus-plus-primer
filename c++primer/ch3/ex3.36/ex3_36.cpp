//compare two arrays for equality
#include<iostream>
#define SIZE 10
using namespace std;
void getData(int*);
bool compare(int*,int*);
int main(){
 int arr1 [SIZE];
 int arr2 [SIZE];
 char choice;
 while(1){
 cout<<"Do you want to test again? Enter y or n."<<endl;
 cin>>choice;
 if(toupper(choice)=='Y'){
 getData(arr1);
 getData(arr2);
 if(compare(arr1,arr2)) cout<<"arrays are equal."<<endl;
 else cout<<"arrays are not equal."<<endl;
  }
 else if(toupper(choice)=='N') break;
 else cout<<"You must enter a valid value for choice, either y or n."<<endl;
 }
return 0;
}

//this function gets data and puts it into the pointer to the array
void getData(int* arr){
 cout<<"Enter up to 10 integers."<<endl;
 int i;
 int* ptr=arr;
 int* end=arr+10;
 while(ptr!=end){
  cin>>i;
  *ptr=i;
  ptr++;
 }
 
}

//this function compares two arrays for equality
bool compare(int* arr1,int* arr2){
 int* arr1End=arr1+10;
 int* arr2End=arr2+10;
 int* arr1Iter=arr1;
 int* arr2Iter=arr2;
 
 while(arr1Iter!=arr1End && arr2Iter!=arr2End){
  if(*arr1Iter!=*arr2Iter) return false;
  arr1Iter++;
  arr2Iter++;
 }

 return true; 
}
