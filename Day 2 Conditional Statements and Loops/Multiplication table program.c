#include <stdio.h>

int main() {
  int t, n, i;
  
  printf("Enter the table number (t): ");
  scanf("%d", &t);
  
  printf("Enter the limit (n): ");
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
    printf("%d*%d=%d\n", i, t, i * t);
}
