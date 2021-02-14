//count how many vowels are in cin
#include "ex5_9.h"
using namespace std;
int main(){
 string data;
 vowelCounts vc;
 getData(&data);
 init(&vc);
 countVowels(data,&vc);
 display(vc);
 return 0;
}

//get the data into a string
void getData(string* dt){
 string tmp;
 cout<<"enter some lines of text, I will count the vowels."<<endl;
 
 do{
  getline(cin,tmp);
  if(tmp.length()>0) (*dt)+=tmp+"\n";
 }while(tmp.length()>0);
}

//init data
void init(vowelCounts* vc){
 (*vc).aCnt=(*vc).eCnt=(*vc).iCnt=(*vc).oCnt=(*vc).uCnt=(*vc).spaceCnt=(*vc).tabCnt=(*vc).newLineCnt=0;
 (*vc).ffCnt=(*vc).flCnt=(*vc).fiCnt=0;
}

//count vowels
void countVowels(string dt,vowelCounts* vc){
 int i;
 string test;
 for(auto &character:dt){
  if(toupper(character)=='A') (*vc).aCnt++;
  if(toupper(character)=='E') (*vc).eCnt++;
  if(toupper(character)=='I') (*vc).iCnt++;
  if(toupper(character)=='O') (*vc).oCnt++;
  if(toupper(character)=='U') (*vc).uCnt++;
  if(character==' ') (*vc).spaceCnt++;
  if(character=='\t') (*vc).tabCnt++;
  if(character=='\n') (*vc).newLineCnt++; 
 }

 //count fl,ff,fi in string
 for(i=0;i<dt.length()-1;i++){
  test=dt.substr(i,2);
  if(test=="ff") (*vc).ffCnt++;
  if(test=="fl") (*vc).flCnt++;
  if(test=="fi") (*vc).fiCnt++;
 }
}

//display vc
void display(vowelCounts vc){
 cout<<"a count is: "<<vc.aCnt<<endl;
 cout<<"e count is: "<<vc.eCnt<<endl;
 cout<<"i count is: "<<vc.iCnt<<endl;
 cout<<"o count is: "<<vc.oCnt<<endl;
 cout<<"u count is: "<<vc.uCnt<<endl;
 cout<<"space count is: "<<vc.spaceCnt<<endl;
 cout<<"tab count is: "<<vc.tabCnt<<endl;
 cout<<"new line count is: "<<vc.newLineCnt<<endl;
 cout<<"fl count is: "<<vc.flCnt<<endl;
 cout<<"fi count is: "<<vc.fiCnt<<endl;
 cout<<"ff count is: "<<vc.ffCnt<<endl;
}
