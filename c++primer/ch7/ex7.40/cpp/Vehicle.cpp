#include "../h/Vehicle.h"

Vehicle::Vehicle(string v,string m,string mod,int y){
 vin=v;
 make=m;
 model=mod;
 year=y;
}

void Vehicle::print(){
 cout<<"Vehicle data:"<<endl;
 cout<<vin<<" "<<make<<" "<<model<<" "<<year<<endl;
}
