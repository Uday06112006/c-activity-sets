#include <stdio.h>
#include <math.h>
int input_x()
{
    int x;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    return x;
}
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
float bogra(int x)
{
    float t=1, i=1, b=1;
    int fact;
    while(t>0.000001)
    {
    fact=factorial(2*i+1);
    t=pow(x,i)/fact;
    b=b+t;
    printf("%f\n", b);
    i++;
    }
    return b;
}
void output(int x, float b)
{
    printf("bogra(%d)=%.3f", x, b);
}
int main()
{
    int x;
    float b;
    x=input_x();
    b=bogra(x);
    output(x, b);
    return 0;
}