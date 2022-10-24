#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
  // Fill this in with exactly seven tests of maxOfArray
  // that all pass, and that test various cases,
  // i.e. where the max is at the beginning, middle and end of the array
  // See lab instructions for details.

  // PERSONAL TESTS COMMENTED OUT BELOW :)

  // int maxAtBeginning[] = {4389, 2, 5, 53, 434, 54, -3487, -4};
  // assertEquals (4389,
  //             maxOfArray(maxAtBeginning, 8),
  //             "maxOfArray(maxAtBeginning, 8)");

  // int maxAtMiddle[] = {6, 2, 5, 53, 434, 54, -3487, -4};
  // assertEquals (434,
  //             maxOfArray(maxAtMiddle, 8),
  //             "maxOfArray(maxAtMiddle, 8)");

  // int maxAtEnd[] = {1, 2, 5, 53, 434, 54, -3487, 904};
  // assertEquals (904,
  //             maxOfArray(maxAtEnd, 8),
  //             "maxOfArray(maxAtEnd, 8)");

  // int maxAtEndAllNegative[] = {-784, -3748, -3, -38, -9, -2};
  // assertEquals (-2,
  //             maxOfArray(maxAtEndAllNegative, 6),
  //             "maxOfArray(maxAtEndAllNegative, 6)");

  // int maxAllZeros[] = {0, 0, 0, 0, 0};
  // assertEquals (0,
  //             maxOfArray(maxAllZeros, 5),
  //             "maxOfArray(maxAllZeros, 5)");
  
  // int maxAtBeginningAllNeg[] = {-1, -70, -8, -483, -38};
  // assertEquals (-1,
  //             maxOfArray(maxAtBeginningAllNeg, 5),
  //             "maxOfArray(maxAtBeginningAllNeg, 5)");

  // int maxAtMiddleAllPos[] = {1, 2, 3, 4, 3, 2, 1};
  // assertEquals (4,
  //             maxOfArray(maxAtMiddleAllPos, 7),
  //             "maxOfArray(maxAtMiddleAllPos, 7)");



  // BELOW ARE GIVEN REFERENCE TESTS, EDITED TO FIT MAXOFARRAYS
  
  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(3,
	       maxOfArray(fiveThrees,5),
	       "maxOfArray(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(0,
	       maxOfArray(zeros,3), 
	       "maxOfArray(zeros,3)" );  

  
  int fiveInts[5]={12,3,4,-9,5}; 
  assertEquals(12,
	       maxOfArray(fiveInts,5), 
	       "maxOfArray(fiveInts,5)" ); 

  assertEquals(12,
	       maxOfArray(fiveInts,2), 
	       "maxOfArray(fiveInts,2)" ); 

  assertEquals(12,
	       maxOfArray(fiveInts,3), 
	       "maxOfArray(fiveInts,3)" ); 

  int meaning[] = {42};
  assertEquals(42,
	       maxOfArray(meaning,1), 
	       "maxOfArray(meaning,1)" ); 

  int mix[10]={-42,12,-9,56,123,-32767,48}; // last three will be zero
  assertEquals(123,
	       maxOfArray(mix,10), 
	       "maxOfArray(mix,10)" );

}
