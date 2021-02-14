#include <iostream>
using namespace std;

#ifndef CANDIDATES
#define CANDIDATES
#endif

void f(){cout<<"in f()"<<endl;}
void f(int i){cout<<"in f(int)"<<endl;}
void f(int i,int j){cout<<"in f(int,int)"<<endl;}
void f(double d,double e=3.14){cout<<"in f(double,double)"<<endl;}
