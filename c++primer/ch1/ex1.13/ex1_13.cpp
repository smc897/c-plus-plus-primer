#include <iostream>
using namespace std;
//use a for loop to sum 50 to 100
int main(){
 int sum=0;
 for(int i=50;i<=100;i++){
  sum+=i;
 }
 cout<<"the sum of all integers from 50 to 100 is: "<<sum<<endl;

 //also print all ints from 10 to 0
 cout<<"and the numbers from 10 to 0 are: "<<endl;
 for(int i=10;i>=0;i--)
  cout<<i;
 return 0;
}
