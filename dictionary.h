#include <iostream>
#include <string>

#ifndef DICTIONARY_H
#define DICTIONARY_H

using std::string;
using std::cout;
using std::endl;

int MinWordLength(string words[], int length);  

int MaxWordLength(string words[], int length); 

int WordLengthRange(string words[], int length);

int AverageWordLength(string words[], int length); 

int MostCommonWordLength(string words[], int length);

#endif
