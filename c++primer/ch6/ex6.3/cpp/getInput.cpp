#include "../h/ex6_3.h"

//get a positive integer to test.
int getInput(){
 int i;
 do{
  cin>>i;
  if(i<=0) cout<<"enter a positive non-zero integer for testing."<<endl;
 }while(i<=0);

 return i;
}
