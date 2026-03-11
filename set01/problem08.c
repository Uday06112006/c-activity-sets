#include <stdio.h>
int n_input(int n)
{
    printf("Enter a number\n");
    scanf("%d", &n);
    return n; 
}
int input(int i, int a[])
{
    scanf("%d", &a[i]); 
    return a[i]; 
}
int sum_(int a[], int n, int sum)
{
    int i;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    return sum;
}
void output(int a[], int n, int sum)
{
    int i;
    printf("%d", a[0]);
    for(i=1;i<n;i++)
    printf("+%d", a[i]);
    printf("=%d", sum);
}
int main()
{
    int n, a[50], i, sum=0;
    n=n_input(n);
    printf("Enter %d elements\n", n);
    for(i=0;i<n;i++)
    a[i]=input(i, a);
    sum=sum_(a, n, sum);
    output(a, n, sum);
    return 0;
}