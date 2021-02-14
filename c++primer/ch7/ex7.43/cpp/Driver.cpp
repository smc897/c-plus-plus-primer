//this sets a var to a default, or user selected one. 
#include "../h/NoDefault.h"
#include <vector>
int main(){
 holder hd(7);
 hd.print();
 vector<holder> vec(10);
 vec.at(5).print();
 return 0;
}
