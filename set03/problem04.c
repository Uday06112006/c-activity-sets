#include <stdio.h>
int input()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
    int a,b,c,i;
    a=0;
    b=1;
    for(i=1;i<n;i++)
    {
    c=a+b;
    a=b;
    b=c;
    }
    return a;
}
void output(int n, int fibo)
{
    printf("The %dth term of the fibonacci series is %d", n, fibo);
}
int main()
{
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n, fibo);
    return 0;
}