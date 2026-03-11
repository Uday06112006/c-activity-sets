#include <stdio.h>
typedef struct fraction
{
    int num, den;
}Fraction;
int input_n()
{
    int n;
    printf("Enter the number of fractions\n");
    scanf("%d", &n);
    return n;
}
Fraction input_fraction()
{
    Fraction t;
    printf("Enter the fraction\n");
    scanf("%d %d", &t.num, &t.den);
    return t;
}
void input_n_fractions(int n, Fraction *a)
{
    for(int i=0;i<n;i++)
    a[i]=input_fraction();
}
int find_gcd(int a, int b)
{
    int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
Fraction add_fractions(Fraction a, Fraction sum)
{
    int gcd;
    gcd=find_gcd(a.den, sum.den);
    sum.den=sum.den*(a.den);
    sum.num=((sum.num*a.den))+(a.num*sum.den)/a.den;
    sum.den=sum.den/gcd;
    sum.num=sum.num/gcd;
    return sum;
}
Fraction add_n_fractions(Fraction *a, int n)
{
    int i=0;
    Fraction sum;
    sum.num=a[i].num;
    sum.den=a[i].den;
    for(i=1;i<n;i++)
    sum=add_fractions(a[i], sum);
    return sum;
}
void output(int n, Fraction *a, Fraction sum)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("%d/%d ",a[i].num, a[i].den);
    if(i<n-1)
    printf("+ ");
    }
    printf("= %d/%d", sum.num, sum.den);
}
int main()
{
    int n, gcd;
    n=input_n();
    Fraction a[n], sum;
    input_n_fractions(n, a);
    sum=add_n_fractions(a, n);
    output(n, a, sum);
    return 0;
}