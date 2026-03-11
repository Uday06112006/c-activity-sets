#include <stdio.h>
#include <math.h>
int input_degree()
{
    int d;
    printf("Enter the degree\n");
    scanf("%d", &d);
    return d;
}
void input_coefficients(int *n, int *a)
{
    printf("Enter the coefficients for the equation\n");
    for(int i=0;i<=*n;i++)
    scanf("%d",&a[i]);
}
float input_x()
{
    float x;
    printf("Enter the value of x\n");
    scanf("%f", &x);
    return x;
}
float evaluate_polynomial(int n, int *a, float x)
{
    int i, t=n;
    float p=0;
    for(i=0;i<=n;i++)
    {
        p=p+(a[i]*(pow(x,t)));
        t--;
    }
    return p;
}
void output(int n, int *a, float x, float r)
{
    int i, t=n;
    for(i=0;i<=n;i++)
    {
        printf(" %dx^%d ", a[i], t);
        t--;
        if(i<n)
        printf("+");
    }
    printf("= %.3f", r);
}
int main()
{
    int n;
    float x, result;
    n=input_degree();
    int a[n+1];
    input_coefficients(&n, a);
    x=input_x(x);
    result=evaluate_polynomial(n, a, x);
    output(n, a, x, result);
    return 0;
}