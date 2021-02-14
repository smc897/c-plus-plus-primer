#include "ex5_17.h"

int main(){
 getData(); //fill up the vectors
 bool isPrefix;
 if(v1.size()==v2.size())
  isPrefix=checkV1withV2();
 else if(v1.size()<v2.size()) isPrefix=checkV1withV2();
 else if(v1.size()>v2.size()) isPrefix=checkV2withV1();

 if(isPrefix) cout<<"the vectors are prefixes"<<endl;
 else cout<<"the vectors are not prefixes"<<endl;

 return 0;
}

//fill up out two integer vectors
void getData(){
 int i,count=0;
 cout<<"enter five ints for v1:"<<endl;
 while(count<5){
  cin>>i;
  v1.push_back(i);
  ++count;
 }
 cout<<"enter five ints for v2:"<<endl;
 count=0;
 while(count<5){
  cin>>i;
  v2.push_back(i);
  ++count;
 }
}

//check v1 with v2
bool checkV1withV2(){
 int count;
 for(auto iter=v1.begin();iter!=v1.end();iter++){
  count=0;
  for(auto iter1=v2.begin();iter1!=v2.end();iter1++){
   if((*iter1)==(*iter)) ++count;
  }

  if(!count) return false;
 }

 return true;
}

//check v2 with v1
bool checkV2withV1(){
 int count;
 for(auto iter=v2.begin();iter!=v2.end();iter++){
  count=0;
  for(auto iter1=v1.begin();iter1!=v1.end();iter1++){
   if((*iter1)==(*iter)) ++count;
  }

  if(!count) return false;
 }

 return true;
}

