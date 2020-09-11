
#include <iostream>
#include <string>
#include "dictionary.h"

using namespace std; 

int main() 
{ 
    // Initialize String Array 
int length = 4; 
    
    string words[4] = { "123s", "23ss", 
      "O3s", "Yellrrrro" }; 

      
cout << MinWordLength(words,length)<< endl ;
cout << MaxWordLength(words,length) << endl;
cout << WordLengthRange( words, length) << endl; 
cout <<  AverageWordLength (words, length);       
  
   
} 