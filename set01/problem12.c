#include <stdio.h>

typedef struct _complex
{
    float real;
    float imaginary;
}
complex;
complex input_complex()
{
    int i;
    complex a;
    printf("Enter the real value\n");
    scanf("%f", &a.real);
    printf("Enter the imaginary value\n");
    scanf("%f", &a.imaginary);
    return a;
}
void input_n_complex(int n, complex a[n])
{
    int i;
    for(i=0;i<n;i++)
    a[i]=input_complex();
}
complex add(complex a, complex sum)
{
    sum.real=a.real+sum.real;
    sum.imaginary=a.imaginary+sum.imaginary;
    return sum;
}
complex add_n_complex(int n, complex a[], complex sum)
{
    int i;
     for(i=0;i<n;i++)
     sum=add(a[i],sum);
     return sum;
}
void output(int n, complex a[], complex sum)
{
    int i;
     printf(" %.0f+%.0fi ", a[0].real, a[0].imaginary);
    for(i=1;i<n;i++)
    {
    printf("+ %.0f+%.0fi ", a[i].real, a[i].imaginary);
    }
    printf("= %.0f+%.0fi", sum.real, sum.imaginary);
}
int main()
{
    complex sum={0,0}, a[50];
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    input_n_complex(n,a);
    sum=add_n_complex(n, a, sum);
    output(n, a, sum);
    return 0;
}