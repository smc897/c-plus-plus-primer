#include<iostream>
typedef int INTEGER;
typedef int* INT_PTR;
using namespace std;
int main(){
 int ia [4][4]={
 {1,2,3,4},
 {2,3,4,5},
 {3,4,5,6},
 {4,5,6,7}
};

//print with a range for
for(INTEGER (&index1) [4]:ia){
  for(INTEGER & index2:index1) cout<<index2;
 cout<<endl;
 }

//print with a for loop using pointers
INT_PTR start=&ia[0][0];
size_t counter=0;
for(INT_PTR index=start;index!=start+16;index++){
 cout<<*index;
 counter++;
 if(!(counter%4)) cout<<endl;
}

//print with a for loop using subscripts
for(INTEGER index=0;index<4;index++){
 for(INTEGER index1=0;index1<4;index1++) cout<<ia[index][index1];
 cout<<endl;
}

 return 0;
}
