#include <iostream>
using namespace std;
//sum of numbers between 50 and 100
int main(){
 int sum=0, val=50;
 //keep executing while as long as val is less than or equal to 100
 while(val<=100){
  sum+=val; //assign sum+val to sum
  ++val;    //add 1 to val
 }

 cout<<" sum of 50 to 100 is: "<<sum<<endl;
 return 0;
}
