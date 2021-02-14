#include<iostream>
using namespace std;
char* init(int ht,int wd=80,char bckgrnd=' '){
 cout<<"ht is: "<<ht<<endl;
 cout<<"wd is: "<<wd<<endl;
 cout<<"background is: "<<bckgrnd<<endl;
 char c;
 char* cp=&c;
 return cp;
}

int main(){
 //cout<<"init():"<<endl;
 //init(); //no worky
 cout<<"init(24,10)"<<endl;
 init(24,10);
 cout<<"init(14,'*')"<<endl;
 init(14,'*');
 return 0;
}
