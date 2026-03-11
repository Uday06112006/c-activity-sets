#include<stdio.h>
int input_side()
{
    float a;
    printf("Enter sides of the  triangle\n");
    scanf("%f", &a);
    return a;
}
int check_scalene(float a, float b, float c)
{
    int isscalene=0;
    if(a!=b && b!=c && a!=c)
       isscalene=1;
    return isscalene;
}
void output(float a, float b, float c, int isscalene)
{
    if(isscalene==1)
    printf("The triangle with sides %.0f, %.0f and %.0f is scalene triangle", a, b, c);
    else if(isscalene==0)
    printf("The triangle with sides %.0f, %.0f and %.0f is not a scalene triangle", a, b, c); 
}
int main()
{
    float a=0, b=0, c=0;
    int isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a, b, c);
    output(a, b, c, isscalene);
    return 0;
}