#include<string>
#include<iostream>
using namespace std;

#ifndef EX6_17H
#define EX6_17H
#endif

bool containsCapitals(const string&); //do we have any capital letters?
void toLowerCase(string&); //convert all letters to lower case
bool getInput(string&); //get a string to test, and return choice of 1) to lower or 2) contains capitals
void showOutput(const string&); //show string converted to lower case
void showOutput2(bool); //show if we have any capital letters in the string.
