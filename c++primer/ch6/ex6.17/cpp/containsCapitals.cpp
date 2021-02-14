#include "../h/ex6_17.h"

bool containsCapitals(const string& str){
 for(auto& ch:str){
  if(isupper(ch)) return true;
 }
 return false;
}
