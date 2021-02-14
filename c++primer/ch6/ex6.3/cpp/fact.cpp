#include "../h/ex6_3.h"

//get the factorial of a number
int fact(int input){
 int result=1;
 int cycle=input;
 while(cycle) result*=cycle--;
 return result;
}
