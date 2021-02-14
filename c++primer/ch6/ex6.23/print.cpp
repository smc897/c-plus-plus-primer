#include<iostream>
using namespace std;

void print(const int*,int);

int main(){
 int i=0;
 int j[2]={0,1};

 cout<<"j is:"<<endl;
 print(j,2);
 cout<<"i is:"<<endl;
 print(&i,1);
}

//first print const int*
void print(const int* arr,int size){
 for(int sztmp=0;sztmp!=size;++sztmp) cout<<*(arr+sztmp)<<" ";
 cout<<endl;
}


