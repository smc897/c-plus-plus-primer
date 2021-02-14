// C++ Program to print 
// an Array using Recursion 
  
#include <iostream>
#include<vector>
#include<cassert> 
#define THRESHOLD 6
using namespace std; 
  
// Recursive function to print the array 
void print_array(vector<int> iv, vector<int>::iterator end,vector<int>::iterator i) 
{ 
 if(i!=end){
  cout<<*(i++)<<endl;
  cout<<__TIME__<<endl;
  print_array(iv,end,i);
 }
 return ;
} 
  
// Driver code 
int main() 
{ 
  
    vector<int> iv { 3, 5, 6, 8, 1,7,9};
    assert (iv.size()<THRESHOLD);
    auto end=iv.end();
    print_array(iv, end,iv.begin()); 
  
    return 0; 
} 
