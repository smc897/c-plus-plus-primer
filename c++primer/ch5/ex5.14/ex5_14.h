#include<string>
#include<iostream>
#include<vector>
using namespace std;

struct datapoint{
 int count;
 string word;
};

vector<datapoint> dataPoints;

void getDataPoints(); //fill up datapoints
void computeFreqs(); //compute frequencies of words
datapoint getHighestDataPoint(); //get highest value of data, return it. 

