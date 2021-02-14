#include<iostream>
#include<string>
using namespace std;
string strarray[10];
string strarraytmp[15];

//func using basic declaration
string(&func())[10]{
 cout<<"hello";
 return strarray;
}

//func using type alias
typedef string strarray1 [15];
strarray1 (&func1()){
 cout<<"in func 1";
 return strarraytmp;
}

//func using trailing return
auto func2()->strarray1&{
 cout<<"in func 2";
 return strarraytmp;
}

//using decltype
string expr [3]={"hello","world","I am"};
decltype(expr)& func3(){
 cout<<"in func 3";
 return expr;
}

int main(){
  func();
  func1();
  func2();
  func3();
  return 0;
}
