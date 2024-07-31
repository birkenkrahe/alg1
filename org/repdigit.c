/*********************************************************/
// repdigit.c: checks numbers for repeated digits.
// Input: number with (without) repeated digits.
// Output: Print "Repeated digit" or "No repeated digit."
/*********************************************************/
#include <stdbool.h> // defines `bool` type
#include <stdio.h>

int main(void)
{
  // variable declarations and initialization
  bool digit_seen[10] = {false}; // initialized to zeros = false
  int digit;
  unsigned long int n; // an unsigned long integer type

  // getting user input
  printf("Enter a number: ");
  scanf("%lu", &n);
  printf("%ld\n", n);

  // scan input number digit by digit
  while (n > 0) { // loop while n positive
    digit = n % 10; // example output: 28212 % 10 = 2
    if (digit_seen[digit]) // if true then digit repeats
      break; // leave loop
    digit_seen[digit] = true;
    n /= 10; // example output: (int) (28212/10) = (int) 2821.2 = 2821
  } // finishes when (int) single digit / 10 = 0

  // print result
  if (n > 0) // found repeat digit before scanning whole number
    printf("Repeated digit\n");
  else  // n = 0 means scanning finished = all digits seen
    printf("No repeated digit\n");

  return 0;
}
