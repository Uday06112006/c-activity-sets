#include <stdio.h>
#include <math.h>
int input()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}
int process(int n, float r)
{
    r=n/2.0;
    while(fabs(n*n-r>0.00000001))
    {
        r=(r+n/r)/2.0;
    }
    return r;
}
int output(int n, float r)
{
    printf("The square root of %d is = %.3f", n, r);
}
int main()
{
    int n;
    float r;
    n=input();
    r=process(n, r);
    output(n, r);
    return 0;
}