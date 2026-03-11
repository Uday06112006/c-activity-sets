#include <stdio.h>
int input()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    return a;
}
int find_gcd(int q, int d)
{
    int i;
    for(i=q;1;i--)
    {
        if(q%i==0&&d%i==0)
        return i;
    }
}
void output(int gcd)
{
    printf("%d\n", gcd);
}
int main()
{
    int a, b, gcd;
    a=input();
    b=input();
    gcd=find_gcd(a, b);
    output(gcd);
    return 0;
}