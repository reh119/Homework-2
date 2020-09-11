
#include <string>
#include "dictionary.h"


/****
* PSEUDOCODE:
set lowest to first string length in array
for loop to go through each 
if our lowest is greater than length of current string 
set lowest to that word length in array
return lowest. 

*
*/
int MinWordLength(string words[], int length) {
  int lowest = words[0].length();
  for (int i =0; i < length; i++){
if (lowest > words[i].length())
   lowest = words[i].length();  
    }
  
    return lowest; 
   //
}
/****
* PSEUDOCODE:
set highest to first string length in array
for loop to go through each 
if our highest is greater to length of current string 
set highest to that word length in array
return highest. 

*
*/
int MaxWordLength(string words[], int length) {

   int highest = words[0].length();
    for (int i =0; i < length; i++){
if (highest < words[i].length())
   highest = words[i].length();  
    }
  
  return highest; 
    
}
/****
* PSEUDOCODE:
*find both greatest and lowest as described in previous 
functions
return highest - lowest
*/
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
/****
* PSEUDOCODE:
* for loop to go through array of strings
counter to keep track of string lengths 
return total of string count / length 
*/
int AverageWordLength(string words[], int length) {
  int total=0; 
   for (int i=0 ; i < length; i++){
total += words[i].length(); 
   }
 
return total/length; 

   }

/****
* PSEUDOCODE:
*
for loop to assign string length to new array of int 
nested for loop that checks each length 
if arr length = each other, add to count 
if count is greater than outr mac count, set 
max count = count 
repeat but this time if max count and count are the same return whats in array 



*/
int MostCommonWordLength(string words[], int length) {
    int max_count=0; 
    int arr[length]; // new array to hold int length

for (int i =0 ; i < length ; i++){
arr[i]=words[i].length(); 

}
for (int i =0; i < length ; i++){
  int count =1; 
  for (int j=i+1; j < length; j++)
    if (arr[i]==arr[j])
  count++; 
    if (count > max_count)
  max_count=count; 
 

}
for (int i =0; i < length ; i++){
  int count =1;
  for (int j = i+1; j< length;j++)
    if (arr[i]==arr[j])
  count ++; 
    if (count == max_count)
  return arr[i] ; 
  

}

return -1; 

   
}
