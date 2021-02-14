#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
 ofstream file;
 file.open("sindata.txt");
 for(double rad=0;rad<=6.28;rad+=0.1) file<<sin(rad)<<endl;
 file.close();
 return 0;
}
