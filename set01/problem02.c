#include <stdio.h>
int main()
{
   int a, b, sum=0;
   printf("Enter two numbers to be added\n");
   scanf("%d %d", &a, &b);
   sum=a+b;
   printf("Sum of %d and %d is %d\n", a, b, sum);
   return 0;
}

