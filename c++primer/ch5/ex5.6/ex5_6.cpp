//give a grade using a conditional operator as opposed to an if
#include<iostream>
using namespace std;
int main(){
 int numberGrade;
 char letterGrade;
 char plusOrMinus;
 //get a grade
 do{
  cout<<"Enter a number from 0 to 100 for a grade."<<endl;
  cin>>numberGrade;
  if(numberGrade>100 || numberGrade<0) cout<<"invalid grade. It must be between 0 and 100 inclusive."<<endl;
 }while(numberGrade<0 || numberGrade>100);

 //compute letter
 char grades [4]={'F','C','B','A'};
 letterGrade=(numberGrade<70)?grades[0]:grades[(numberGrade-60)/10];
 

 //compute plusOrMinus
 if(numberGrade%10<3) plusOrMinus='-';
 else if(numberGrade%10>7) plusOrMinus='+';

 cout<<"the grade is: "<<letterGrade<<" "<<plusOrMinus<<endl;
 return 0;
}
