//revision of arrPtr using a reference
#include<iostream>
using namespace std;

int odd[]={1,3,5,7,9};
int even[]={0,2,4,6,8};

//return a reference to array of five elements
decltype(odd)& arrPtr(int i){
 return(i%2)?odd:even;
}

int main(){
 cout<<arrPtr(5)[3]<<endl;
 return 0;
}
