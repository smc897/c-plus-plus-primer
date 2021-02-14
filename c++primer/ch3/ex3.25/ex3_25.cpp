#include<vector>
#include<iostream>

using namespace std;
int main(){
 unsigned int grade;
 vector<unsigned> scores(11,0);
 while(cin>>grade){
  if(grade<=100){
   auto scoreVect=scores.begin();
   scoreVect+=(grade/10);
   (*scoreVect)++;
  }
 }

 for(auto scoreVect=scores.begin();scoreVect!=scores.end();scoreVect++) cout<<*scoreVect<<endl;
 return 0;
}
