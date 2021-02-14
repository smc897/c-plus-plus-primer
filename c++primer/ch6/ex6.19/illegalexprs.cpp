#include <vector>
#include<string>
using namespace std;

double calc(double);
int count(const string&,char);
int sum(vector<int>::iterator,vector<int>::iterator,int);
vector<int> vec(10);

int main(){
 //calc(23.4,55.1); //too many arguments
 count("abcda",'a');
 calc(66);
 sum(vec.begin(),vec.end(),3.8);
 return 0;
}

double calc(double d){ return 5.6;}
int count(const string& str,char ch){return 5;}
int sum(vector<int>::iterator i,vector<int>::iterator i1,int i2){return 5;}
