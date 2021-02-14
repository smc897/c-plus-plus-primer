#include "../h/ex6_17.h"

int main(){
 string str;
 if(getInput(str)){
  //choice 2) contains capitals
  const string str1=str;
  showOutput2(containsCapitals(str1));
 }
 else{
  //choice 1) to lower case
  toLowerCase(str);
  const string str1=str;
  showOutput(str1);
 }

 return 0;
}
