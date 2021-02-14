#include<iostream>
#include "Sales_data.h"


int main(){

 cout<<"Enter an option:"<<endl;
 cout<<"	1)print series of transactions"<<endl;
 cout<<"	2)sum two books"<<endl;
 cout<<"	3)sum several books with same isbn"<<endl;
 cout<<"	4)count how many transactions occur for the same Number."<<endl;
 int choice;
 cin>>choice;

if(choice==1){ 
 //read a set of book sales transactions, and print to std out.
 Sales_data book;
 while(cin>>book.bookNo){
  cin>>book.units_sold>>book.price;
  book.revenue=book.units_sold*book.price;
  cout<<book.bookNo<<book.revenue<<endl;
 }
}
if(choice==2){
 //read two sales_data objects with same number and print the sum
 Sales_data book1,book2;
 cin>>book1.bookNo>>book1.units_sold>>book1.price; 
 cin>>book2.bookNo>>book2.units_sold>>book2.price;
 if(book1.bookNo==book2.bookNo){
  book1.revenue=book1.price*book1.units_sold;
  book2.revenue=book2.price*book2.units_sold;
  double sum=book1.revenue+book2.revenue;
  cout<<"the sum of the books are: "<<sum<<endl;
 }
 else{
  cerr<<"books have to have the same number."<<endl;
  return -1;
 }
}

//sum several books
if(choice==3){
 Sales_data book3,book3Tmp;
 cin>>book3Tmp.bookNo>>book3Tmp.units_sold>>book3Tmp.price;
 double sum=book3Tmp.units_sold*book3Tmp.price;
 while(cin>>book3.bookNo>>book3.units_sold>>book3.price){
  if(book3.bookNo==book3Tmp.bookNo){
   book3Tmp.revenue=book3Tmp.price*book3Tmp.units_sold;
   book3.revenue=book3.price*book3.units_sold;
   sum+=book3.revenue;
  }
  else{
   cerr<<"book nums have to be equal"<<endl;
   return -1;
  }
 }
 cout<<"sum is: "<<sum<<endl;
}

//count how many transactions occur for the same book number
if(choice==4){
 Sales_data book4,book4Tmp;

 if(cin>>book4.bookNo>>book4.units_sold>>book4.price){
  int cnt=1;
  while(cin>>book4Tmp.bookNo>>book4Tmp.units_sold>>book4Tmp.price){
   if(book4.bookNo==book4Tmp.bookNo){
    cnt++;
   } //end if
   else{
    cout<<book4.bookNo<<" occurs "<<cnt<<" times."<<endl;
    book4.bookNo=book4Tmp.bookNo;
    cnt=1;
   } //end else
  } //end while
   cout<<book4.bookNo<<" occurs "<<cnt<<" times."<<endl;
 }
}
 return 0;
}
