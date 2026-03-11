#include<stdio.h>
int input(float *b, float *h)
{
    printf("Enter the values of base and height\n");
    scanf("%f %f", b, h);
}
int process(float b, float h, float *area)
{
    *area=(b*h)/2.0;
}
void output(float b, float h, float area)
{
    printf("The area of triangle of base %.2f and height %.2f is = %.2f ", b, h, area);
}
int main()
{
    float b, area, h;
    input(&b, &h);
    process(b, h, &area);
    output(b, h, area);
    return 0;
}