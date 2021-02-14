//this program reads several transactions for the same ISBN. IT then sums them.
#include "..//Sales_item.h"
#include <iostream>
using namespace std;
int main(){
 Sales_item book,bookSummed,bookCurrent;
 cout<<"Enter a series of books with the same ISBN."<<endl;
 cin>>bookCurrent;
bookSummed=bookCurrent;
 while(cin>>book){
  if(book.isbn()==bookCurrent.isbn()){
   bookCurrent=book;
   bookSummed+=book;
  }
  else{
   cerr<<"All books must have the same ISBN.";
   return -1;
  }
 }

 cout<<"The summed books are: "<<bookSummed<<endl;
 return 0;
}
