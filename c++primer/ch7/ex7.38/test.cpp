//this echoes a pointer using default params in a function
#include <iostream>
using namespace std;
void readval(int*,istream&);

void readval(int* val=0,istream& in=cin){
 in>>*val;
}

int main(){
 int num;
 cout<<"enter a number:"<<endl;
 readval(&num);
 cout<<"number is: "<<num<<endl;
 return 0;
}
