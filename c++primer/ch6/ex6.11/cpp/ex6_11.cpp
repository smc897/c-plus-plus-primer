#include "../h/ex6_11.h"

int main(){
 string str;
 size_t count;
 char character;
 size_t firstPos;

 getInput(str,character);
 const string str1=str;
 firstPos=getFirstOcurrence(str1,character,count);
 showOutput(str,character,firstPos,count);

 return 0;
}
