#include <stdio.h>
 
int main()
{
  int n, first = 0, second = 1, next, F;
 
  printf("Enter the number of terms\n");
  scanf("%d", &n);
 
  printf("First %d terms of Fibonacci series are:\n", n);
 
  for (F = 0; F < n; F++)
  {
    if (F <= 1)
      next = F;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
 
  return 0;
}
