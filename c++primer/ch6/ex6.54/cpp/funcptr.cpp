//vector of function pointers
#include "../h/funcptr.h"
int main(){ 
 int (*ptr)(int,int);
 ptr=&func;
 vector<int> vec1={ptr(3,4),ptr(4,5),ptr(6,7)};
 ptr=&mult;
 vec1.push_back(ptr(5,7));
 for(auto a=vec1.begin();a!=vec1.end();a++) cout<<*a<<endl;
 return 0;
}
