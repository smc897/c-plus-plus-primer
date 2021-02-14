#include<iostream>
using namespace std;

class NoDefault{
 private:
  int num;

 public:
  NoDefault(int n=5);
  void setNum(int n);
  void print();
};

class holder{
 private:
  NoDefault nd;
 public:
  holder(int n=5){nd.setNum(n);};
 void print();
};
