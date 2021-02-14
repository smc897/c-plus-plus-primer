#include "../h/ex6_11.h"

size_t getFirstOcurrence(const string& str,char c,size_t& occurs){
 size_t ret=str.size();
 occurs=0;
 
 for(size_t i=0;i!=str.size();++i){
  if(str[i]==c){
   if(ret==str.size()) ret=i;
   ++occurs;
  }
 }

 return ret;
}
