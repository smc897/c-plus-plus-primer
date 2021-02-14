#include "../h/ex6_17.h"
void toLowerCase(string& str){
 size_t count=0;
 while(count<str.length()){
  str[count]=tolower(str[count]);
  count++;
 }
 return; 
}
