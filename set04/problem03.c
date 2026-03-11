#include <stdio.h>
void input_n_r(int *n, int *r)
{
    printf("Enter the vaalues of n and r\n");
    scanf("%d %d", n, r);
}
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int find_ncr(int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
void output(int res, int n, int r)
{
    printf("%d C %d = %d",n, r, res);
}
int main()
{
    int n, r, res;
    input_n_r(&n, &r);
    res=find_ncr(n, r);
    output(res, n, r);
    return 0;
}