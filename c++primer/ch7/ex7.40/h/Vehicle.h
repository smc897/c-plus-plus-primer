#include <string>
#include <iostream>
using namespace std;

class Vehicle{
 private:
 string vin;
 string make;
 string model;
 int year;
public:
 Vehicle(string v="1234",string m="corolla",string mod="toyota",int year=2015);
 void print();
};
