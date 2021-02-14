#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double getAtan(double,double);
int main(){
 int time=0;
 cout<<atan(-0.5); //upper left
 ofstream file;
 file.open("data.txt");
 while(time<1000000){
 double avg=0;
 int cycle=0;
 while(cycle<2000){
  double acttime=time*.000000001;
  double freq1=100000000+50000*cos(6.28*10000*acttime);
  double i=sin(6.28*(freq1)*acttime);
  double q=cos(6.28*(freq1)*acttime);
  double i1=sin(6.28*(freq1)*(acttime+.000000001));
  double q1=cos(6.28*(freq1)*(acttime+.000000001));
  double atan1=getAtan(i,q);
  double atan2=getAtan(i1,q1);
  if(atan2<atan1) atan2+=6.28;
  double freq=(atan2-atan1)*1000000000;
  avg+=freq/2000; //average of 1000 samples
  cycle++;
  time++;
 }
 file<<avg<<endl;
}
 file.close();
 return 0;
}

double getAtan(double in,double quad){
 if(in==0.0) in = 0.001;
 if(in>=0 && quad>=0) return atan(quad/in);
 if(in<0 && quad>=0) return (atan(quad/in)+3.14);
 if(in<0 && quad<0) return (atan(quad/in)-3.14);
 if(in>0 && quad<0) return(atan(quad/in));
}
