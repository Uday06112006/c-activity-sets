#include <stdio.h>
int input(int *a)
{
    printf("Enter a number \n");
    scanf("%d", a);
}
int process(int a, int b, int c, int *largest)
{
    if(a<b)
    a=b;
    if(a<c)
    a=c;
    *largest=a;
}
int output(int a, int b, int c, int *largest)
{
    printf("The largest of %d %d %d is = %d", a, b, c, *largest);
}
int main()
{
    int a, b, c, largest;
    input(&a);
    input(&b);
    input(&c);
    process(a, b, c, &largest);
    output(a, b, c, &largest);
    return 0;
}