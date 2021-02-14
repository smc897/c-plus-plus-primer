#include<iostream>
#include<string>
using namespace std;
string make_plural(size_t ctr,const string& word, const string& ending="s"){return (ctr>1) ? word+ending:word;}

int main(){
 const string str="success";
 cout<<make_plural(2,str,"es");
 const string str1="failure";
 cout<<" "<< make_plural(2,str1);
 return 0;
}

