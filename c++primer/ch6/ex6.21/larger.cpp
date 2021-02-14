//return larger of int or int*
//swap two pointers
#include<iostream>
using namespace std;

int larger(int,int*);
void swap(int*,int*);

int main(){
 int i,i1,i2;
 int* pt=&i1;
 int* pt2=&i2;
 *pt=7;
 *pt2=10;
 i=5;
 cout<<larger(i,pt)<<" is larger"<<endl;
 cout<<"before swap, pt is: "<<*pt<<" and pt2 is: "<<*pt2<<endl;
 swap(pt,pt2);
 cout<<"after swap, pt is: "<<*pt<<" and pt2 is: "<<*pt2<<endl;
 return 0;
}

//return the larger of int i or int* pt
int larger(int i,int* pt){
 if(i>*pt) return i;
 else return *pt;
}

//swap pointers i and i1;
void swap(int* i,int* i1){
 int tmp=*i;
 *i=*i1;
 *i1=tmp;
 return;
}




