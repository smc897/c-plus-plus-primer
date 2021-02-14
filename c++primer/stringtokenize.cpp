#include<iostream>
#include<string.h>
using namespace std;
void reverse(char*,char[]);
void write(char[],char[],int*);
void dofunc(char[],char[]);
int main(){
 char input[80];
 char output[80];
 cout<<"enter a string using _ as a delimiter.";
 cin>>input;
 dofunc(input,output);
 cout<<"output is:"<<output<<endl;
 return 0;
}

//this reverses token
void reverse(char* input,char output [20]){
 //get length of input
 int length=0;
 while(input[length]!='\0') length++;

 //fill output with reversed input
 int i=0;
 length--;
 while(i<=length){
  output[i]=input[length-i];
  i++;
 }
 output[length+1]='\0';
}

//this writes strout
void write(char in [20],char out [80],int* pt){
 for(int i=0;in[i]!='\0';i++) {
  out[*pt]=in[i];
  (*pt)++;
 }
 out[*pt]=' ';
 (*pt)++;
}

//this function does verything.
void dofunc(char str[80],char strout[80]){
 char delim[2]="_";
 char* token;
 char result [20];
 int ptr=0; //hold pointer to strout index;
 token=strtok(str,delim);
  reverse(token,result);
  write(result,strout,&ptr);

 while(token!=NULL){
  token=strtok(NULL,delim);
  if(token!=NULL){
  reverse(token,result);
  write(result,strout,&ptr);
  }
 }
 strout[ptr]='\0';
}
