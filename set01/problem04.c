#include <stdio.h>
int input(int *a)
{
    printf("Enter a number\n");
    scanf("%d", a);
}
int sum_(int *a, int *b, int *sum)
{
    *sum=*a+*b;
}
void output(int *a, int *b, int *sum)
{
    printf("The sum of %d and %d is = %d", *a, *b, *sum);
}
int main()
{
    int a, b, sum=0;
    input(&a);
    input(&b);
    sum_(&a, &b, &sum);
    output(&a, &b, &sum);
    return 0;
}