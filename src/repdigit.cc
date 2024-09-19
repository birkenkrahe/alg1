#include <stdbool.h>
#include <stdio.h>

int main() {
/**********************************************************/
// repdigit.c: checks integer for repeated digits
// Input: integer with or without repeated digits
// Output: Print "Repeated digit" or "No repeated digit"
// Author: Marcus Birkenkrahe v1 without user input GPLv3
/**********************************************************/
// declare and initialize variables
int digit, n = 282;
bool digit_seen[10] = {false};

// loop over the input digit n
while (n > 0) {
  digit = n % 10;  // 282 % 10 = 2 (first digit)
  if (digit_seen[digit] == true) // digit has been seen already
    break;
  digit_seen[digit] = true; // digit has now been seen
  n /= 10; // (int) (282/10) = (int) (28.2) = 28 -> n
}

// print result
if (n > 0) // loop was left 
  printf("Repeated digit.");
else
  printf("No repeated digit.");
return 0;
}
