#include "ex5_14.h"
int main(){
 datapoint dp;
 getDataPoints();
 computeFreqs();
 dp=getHighestDataPoint();
 cout<<"the most repeated word is: "<<dp.word<<" it was repeated "<<dp.count<<" times."<<endl;
}

//fill up datapoint vector
void getDataPoints(){
 string in;
 datapoint dp;
 cout<<"enter some words, enter stop to quit."<<endl;
 do{
  cin>>in;
  if(in!="stop"){
   dp.count=0;
   dp.word=in;
   (dataPoints).push_back(dp); //add new data point
  }
 }while(in!="stop");
}

//compute the frequencies
void computeFreqs(){
 for(auto iter=dataPoints.begin();iter!=dataPoints.end();iter++){
  (*iter).count++;
  for(auto iter1=iter+1;(iter1!=dataPoints.end())&&((*iter1).word==(*iter).word);iter1++){
   (*iter).count++;
   (*iter1).count++;
  } 
 }
}

//get highest value datapoint
datapoint getHighestDataPoint(){
 int count=0;
 for(auto iter=dataPoints.begin();iter!=dataPoints.end();iter++){
  if((*iter).count>count) count=(*iter).count;
  }

 for(auto iter=dataPoints.begin();iter!=dataPoints.end();iter++){
  if((*iter).count==count) return (*iter);
  }
}
