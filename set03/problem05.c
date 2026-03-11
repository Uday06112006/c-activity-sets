#include <stdio.h>
#include <math.h>
int j;
int input_array_size()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}
void erotostenese(int n, int a[n])
{
    int k,i,l;
    for(i=2;i<=sqrt(n);i++)
    {
        for(;a[i]==0;i++);
        for(l=i*i;l<=n;l=l+i)
        {
            a[l]=0;
        }
        for(k=2;k<n;k++)
        {
            printf("%d\t", a[k]);
        }
        printf("\n");
    }
}
void init_array(int n, int a[n])
{
    int i,k=0;
    for(i=0;i<=n;i++)
    {
        a[k]=i;
        k++;
    }
    erotostenese(n, a);
}
void output(int n, int a[n])
{
    int i;
    printf("\n");
    for(i=2;i<n;i++)
    {
        if(a[i]!=0)
        printf("%d\t", a[i]);
    } 
}
int main()
{
    int n;
    n=input_array_size();
    int a[n];
    init_array(n, a);
    output(n, a);
    return 0;
}