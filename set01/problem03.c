#include <stdio.h>
int input()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    return a;
}
int sum_(int sum, int a, int b)
{
    sum=a+b;
    return sum;
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is = %d", a, b, sum);
}
int main()
{
    int a, b, sum=0;
    a=input();
    b=input();
    sum=sum_(sum, a, b);
    output(a, b, sum);
    return 0;
}