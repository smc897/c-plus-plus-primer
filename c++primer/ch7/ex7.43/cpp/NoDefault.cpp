#include "../h/NoDefault.h"

NoDefault::NoDefault(int n){
 num=n;
}

void NoDefault::setNum(int n){num=n;}

void NoDefault::print(){
 cout<<num;
}

void holder::print(){
 nd.print();
}

