/****
* PSEUDOCODE:
*
*/
#include <string>
#include "dictionary.h"

using namespace std;

int MinWordLength(string words[], int length) {

   int lowest = words[0].length();
    for (int i =0; i < length; i++){
if (lowest > words[i].length())
   lowest = words[i].length();  
    }
  
    return lowest; 
   //
}

int MaxWordLength(string words[], int length) {

   int highest = words[0].length();
    for (int i =0; i < length; i++){
if (highest < words[i].length())
   highest = words[i].length();  
    }
  
    return highest; 
    
}

int WordLengthRange(string words[], int length) {

    int highest = words[0].length();
    for (int i =0; i < length; i++){
if (highest < words[i].length())
   highest = words[i].length();  
    }

  int lowest = words[0].length();
    for (int i =0; i < length; i++){
if (lowest > words[i].length())
   lowest = words[i].length();  
    }
  
    return highest-lowest;
}

int AverageWordLength(string words[], int length) {
  int total=0; 
   for (int i=0 ; i < length; i++){
total += words[i].length(); 
   }
 
return total/length; 

   }


int MostCommonWordLength(string words[], int length) {
    int maxcount=0; 
    int arr[length]; // new array yo hold int length

for (int i =0 ; i < length ; i++){
arr[i]=words[i].length(); 

}
for (int i =0; i < length ; i++){
  int count =1; 
  for (int j=i+1; j < length; j++)
if (arr[i]==arr[j])
  count++; 
  if (count > maxcount)
  maxcount=count; 
 

}
for (int i =0; i < length ; i++){
  int count =1;
  for (int j = i+1; j< length;j++)
  if (arr[i]==arr[j])
  count ++; 
  if (count == maxcount)
  return arr[i] ; 
  

}

return -1; 

   
}
