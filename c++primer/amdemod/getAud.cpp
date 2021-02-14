//pull a val out of table using x and y
#include "getAud.h"

using namespace std;
double getValue(int x,int y){
 double val;
 string str;
 ifstream filein;
 filein.open("arraytable.txt");
 for(int ytmp=0;ytmp<y;ytmp++) getline(filein,str);
 for(int xtmp=0;xtmp<=x;xtmp++) filein>>val;
 filein.close();
 return val;
}

double interp(double i,double q){
 int iint=10*i;
 int qint=10*q;
 
 //get baseline
 double baseline=getValue(iint+1,qint+1);
 double baselinex=getValue(iint+1,qint);
 double baseliney=getValue(iint,qint+1);

 //get x slope
 double xslope=10*(getValue(iint,qint+1)-baselinex);

 //get y slope
 double yslope=10*(getValue(iint+1,qint)-baseliney);

 //get deltax and deltay
 double deltax=i-(iint+1)/10;
 double deltay=q-(qint+1)/10;

 //compute total value
 double res=baseline+deltax*xslope+deltay*yslope;
 return res;
}

