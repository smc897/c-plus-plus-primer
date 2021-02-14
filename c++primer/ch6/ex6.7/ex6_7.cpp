#include "ex6_7.h"

int main(){
 do{
  generate();
 }while(doAgain());

 return 0;
}

//generate a sequence
void generate(){
 static int cnt=0;
 cout<<"new value is: "<<cnt++<<endl;
}

//determine whether to do it again
bool doAgain(){
 char choice;
 do{
  cout<<"enter y to do it again, or n to exit"<<endl;
  cin>>choice;
}while(choice!='y' && choice!='n');

 switch(choice){
  case 'y': return true;
  case 'n': return false;
 }

}
