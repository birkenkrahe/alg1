#include <stdio.h>






int main() {
int i, n;
printf("How many numbers do you want to reverse: ");
scanf("%d", &n);
int a[n];
printf("Enter %d numbers: ", n);
for ( i = 0; i < n; i++) {
  scanf("%d", &a[i]);
}; puts("");
printf("In reverse order: ");
for ( i = n-1; i >= 0; i--) {
  printf("%d ", a[i]);
}; puts("");
return 0;
}
