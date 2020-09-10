/****
* PSEUDOCODE: Binary Search
for loop to go through array 1 by 1 
if target is found in first position, we're done. Target has been found.
return position back to main

since its a for loop, it will go through list until target is found. 

*
*/
/****

* PSEUDOCODE: LinearSearch
while first number is less than our last AND found is false
set middle equal to middle number in our list. 

if the number set to middle is equal to our target, then we are done.
set found true 
return mid (position).
if number is less than middle (cuts last half off)
change last to middle - 1
if number is greater than middle 
change first to middle +1 (cuts first half off)

*
*/
int LinearSearch(int numbers[], int length, int n) {
    
    for (int position = 0; position < length; position++){
  if (numbers[position]==n){
    return position; 
  }
    }
   return -1;
}

int BinarySearch(int numbers[], int length, int n) {
    
  int first = 0;
  int last = length-1;
  int mid = 0; 
  bool found = false;

  while (first<=last && !found){
  mid = (first+last)/2;

  if (n == numbers[mid]){
   found = true;
   return mid;
  }
  else if (n < numbers [mid]){
  last = (mid -1);
  }
  else 
  first = (mid +1);

  }



     return -1;
}

