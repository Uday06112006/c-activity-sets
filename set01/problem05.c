#include <stdio.h>
int input()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    return a;
}
int process(int a, int b, int c)
{
    if(a<b)
    a=b;
    if(a<c)
    a=c;
    return a;
}
int output(int a, int b, int c, int largest)
{
    printf("The largest of %d %d %d is = %d", a, b, c, largest);
}
int main()
{
    int a, b, c, largest;
    a=input();
    b=input();
    c=input();
    largest=process(a, b, c);
    output(a, b, c, largest);
    return 0;
}