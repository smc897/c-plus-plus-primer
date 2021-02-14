#include <string>
#include <iostream>
#include<vector>
using namespace std;
class Screen{
 public:
  typedef string::size_type pos;

 //constructors 
  Screen()=default;
  Screen(pos ht,pos wd,char c): height(ht),width(wd),contents(ht*wd,c){}
  Screen(pos ht,pos wd): height(ht),width(wd),contents(ht*wd,' '){}   
  void display(ostream&);
  char get() const {return contents[cursor];}
  inline char get(pos ht,pos wd) const;
  Screen& move(pos r,pos c);
  Screen& set(char);
  Screen& set(pos,pos,char);
  pos size() const {return height*width;}
  //setter and getter functions
  pos getCursor(){return cursor;}
  pos getHeight(){return height;}
  pos getWidth(){return width;}
  string getContents(){return contents;}
  void setCursor(pos c){cursor=c;}
  void setHeight(pos h){height=h;}
  void setWidth(pos w){width=w;}
  void setContents(string c){contents=c;}
 private:
  pos cursor=0;
  pos height=0,width=0;
  string contents;
  
};
