//compute sqrt(i*i+q*q)
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main(){
 ofstream file;
 file.open("arraytable.txt");
 for(int i=0;i<20;i++){
  for(int i1=0;i1<20;i1++){
   double iact=(double)i/10;
   double qact=(double)i1/10;
   double val=sqrt(iact*iact+qact*qact);
   file<<val<<" ";
  }
  file<<endl;
 }

 file.close();
 return 0;
}
