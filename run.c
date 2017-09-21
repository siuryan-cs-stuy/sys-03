/*
 * Ryan Siu
 * Systems pd 10
 * 9-21-17
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

  // Seed the random number generator
  srand( time(NULL) );

  // Initialize array of 10 ints
  int arr[10];

  // Populate array with random ints
  for( int i = 0; i < 10; i++ ) {
    arr[i] = rand();
  }

  // Set last value in array to 0
  arr[9] = 0;

  // Print out values in the array
  printf("The first array: \n");
  for( int i = 0; i < 10; i++ ) {
    printf("arr[%d]: %d\n", i, arr[i]);
  }

  // New array with 10 ints
  int sep[10];

  // Populate sep array with values in reverse order in arr
  // Uses only pointers
  int *p = &arr[9];
  for( int i = 0; i < 10; i++ ) {
    sep[i] = *p;
    p--;
  }
  
  // Print out values in array
  printf("The second array: \n");
  for( int i = 0; i < 10; i++ ) {
    printf("sep[%d]: %d\n", i, sep[i]);
  }
  
}
