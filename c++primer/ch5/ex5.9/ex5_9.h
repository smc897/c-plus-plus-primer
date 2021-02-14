#include<string>
#include<iostream>
using namespace std;

struct vowelCounts{
 int aCnt;
 int eCnt;
 int iCnt;
 int oCnt;
 int uCnt;
 int spaceCnt;
 int tabCnt;
 int newLineCnt;
 int ffCnt;
 int fiCnt;
 int flCnt;
};

void getData(string*);
void countVowels(string,vowelCounts*);
void init(vowelCounts*);
void display(vowelCounts);
