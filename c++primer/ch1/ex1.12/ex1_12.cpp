#include <iostream>
using namespace std;
//this computes the sum from -100 to 100, then prints it. 
int main(){
 int sum=0;
 for(int i=-100;i<=100;i++){
   sum+=i;
 }
 cout<<sum;
 return 0;
}
