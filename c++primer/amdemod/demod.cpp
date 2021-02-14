//am wave at 550k with 25% modulation and mod freq of 1k
//500 samples for average
//500ns for interval
#include "getAud.h"
double getIn(int,double,double);
double getQuad(int,double,double);

int main(){
 ofstream file;
 file.open("data.txt");
 double avgedaud [20005];
 int sampnum=0;
 double audsamp=0;
 for(int i=0;i<20000;i++){
  double time=500*.000000001*i;
  double aminput=sin(6.28*550000*time)*(1+0.25*sin(6.28*1000*time)); //am wave

  //i and q waveforms at 550khz
  double in=getIn(550000,time,aminput);
  double q=getQuad(550000,time,aminput);

  //compute audio
  audsamp+=interp(in,q)/100;

  if(i%100==0) {
   avgedaud[sampnum]=audsamp;
   file<<avgedaud[sampnum]<<endl;
   sampnum++;
   audsamp=0;
  }
 }

  file.close();
 return 0;
}

double getIn(int freq,double t,double in){
 double period=1/freq;
 double fract=t/period-(int)(t/period);
 if(fract<0.5) return -1*in;
 else return in;
}

double getQuad(int freq,double t,double in){
 double period=1/freq;
 double fract=t/period-(int)(t/period);
 if(fract>0.25 && fract<0.75) return -1*in;
 else return in;
}


