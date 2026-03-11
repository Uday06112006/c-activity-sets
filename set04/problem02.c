#include <stdio.h>
typedef struct 
{
    int num, den;
}Fraction;
Fraction input_fractions()
{
    Fraction a;
    printf("Enter the numerator and denominator of the fraction\n");
    scanf("%d %d", &a.num, &a.den);
    return a;
}
Fraction find_small(Fraction a, Fraction b, Fraction c)
{
    if((a.num*b.den)<(a.den*b.num)&&(a.num*c.den)<(a.den*c.num))
    return a;
    else if ((b.num*c.den)<(b.den*c.num))
    return b;
    else
    return c;
}
void output(Fraction smallest)
{
    printf("%d / %d is the smallest of the three fractions\n", smallest.num, smallest.den);
}
int main()
{
    Fraction f1, f2, f3, smallest;
    f1=input_fractions();
    f2=input_fractions();
    f3=input_fractions();
    smallest=find_small(f1, f2, f3);
    output(smallest);
    return 0;
}