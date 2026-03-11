#include <stdio.h>
typedef struct _complex 
{
    float real;
    float imaginary;
}
complex;
complex input_complex(complex *a)
{
    printf("Enter real value\n");
    scanf("%f", &a->real);
    printf("Enter the imaginary value\n");
    scanf("%f", &a->imaginary);
}
complex sum_complex(complex *a, complex *b, complex *sum)
{
    sum->real=(a->real+b->real);
    sum->imaginary=(a->imaginary+b->imaginary);
}
void output(complex *a, complex *b, complex *sum)
{
    printf("The sum of (%.0f+%.0fi) and (%.0f+%.0fi) is = (%.0f+%.0fi)", a->real, a->imaginary, b->real, b->imaginary, sum->real, sum->imaginary);
}
int main()
{
    complex a, b, sum;
    input_complex(&a);
    input_complex(&b);
    sum_complex(&a, &b, &sum);
    output(&a, &b, &sum);
    return 0;
}