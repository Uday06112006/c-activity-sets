#include <stdio.h>
int input(int n)
{
  printf("Enter a number\n");
  scanf("%d", &n);
  return n;
}
int process(int sum, int n)
{
  int i=0;
  for(i=0;i<=n;i++)
    sum=sum+i;
    return sum;
}
void output(int n, int sum)
{
  printf("The sum of first %d natural numbers is = %d", n, sum);
}
int main()
{
  int n, sum=0;
  n=input(n);
  sum=process(sum, n);
  output(n, sum);
  return 0;
}