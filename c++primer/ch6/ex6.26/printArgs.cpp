#include<string.h>
#include<iostream>
using namespace std;
//print the values of the args passed to main
void print(const char*);
int main(int argc,char** argv){
 for(int sztmp=0;sztmp!=argc;++sztmp){
  cout<<"parameter "<<sztmp<<" is: ";
  print(argv[sztmp]);
  cout<<endl;
 }

 return 0;
}

//print the char array
void print(const char* charr){
 int index=0;
 while(*(charr+index)) cout<<*(charr+(index++));
 cout<<endl;
}
