/**************************************************************/
// reverse.c: reverse a series of numbers entered by the user
// Store numbers as int array with scanf in a for loop
// Print numbers in reverse order with printf in a for loop
/**************************************************************/    
#include <stdio.h> // include input/output header file
#define N 10  // define constant array length with directive

int main() // main program
{
  int i;           // declare loop variable
  int a[N] = {0};  // macro definition (uses constant N)
  printf("Enter 10 numbers: "); // ask for input
  for ( i = 0; i < N; i++) { // loop over array (counting up)
    scanf("%d", &a[i]); // get the i-th array element from stdin
    printf("%d ", a[i]); // print the i-th array element to stdout
  }
  puts("");  // add new line
  printf("In reverse order: ");  
  for ( i = N-1; i >= 0; i--) { // loop over array (counting down)
    printf("%d ", a[i]); 
  }
  puts("");      
  return 0; // confirm program ran successfully
} // end of main program
