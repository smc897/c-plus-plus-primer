#include "../h/ex6_17.h"

bool getInput(string& str){
 int choice;
 bool ret;
 cout<<"Enter:\n 1) for to lower case\n 2) for contains capitals"<<endl;
 cin>>choice;
 switch(choice){
  case 1: ret=false;
          break;
  case 2: ret=true;
          break;
  default: ret=true;
           break;
 }

 cout<<"Enter a string: "<<endl;
 cin>>str;

 return ret;
}
