#include <stdio.h>
#include <math.h>
int input_number()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}
int is_prime(int n)
{
    int i;
    for(i=2;i<sqrt(n-1);i++)
    {
        if(i%n==0)
        return 1;
    }
    return 0;
}
void output(int n, int result)
{
    if(result==1)
    printf("The number %d is not a number", n);
    else 
    printf("the given number %d is a prime number",n);
}
int main()
{
    int n, result;
    n=input_number();
    result=is_prime(n);
    output(n, result);
    return 0;
}