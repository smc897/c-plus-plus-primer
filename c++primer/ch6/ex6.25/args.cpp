//pass two args, print string
#include<iostream>
#include<string.h>
using namespace std;
void printStr(char*);
int main(int argc,char** argv){
 char str[100];
 strcpy(str,argv[1]);
 strcat(str," ");
 strcat(str,argv[2]); //concatenate two strings
 cout<<"The commands are: "<<endl;
 printStr(str);
 return 0;
}

//print the string
void printStr(char* str){
 int index=0;
 while(*(str+index)) cout<<*(str+(index++));
}
