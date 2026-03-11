#include <stdio.h>
#include <math.h>
int input_array_size()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}
int is_composite(int k, int sum)
{
    int i;
    for(i=2;i<=sqrt(k);i++)
    {
        if(k%i==0)
        {
            return k;
        }
    }
    return 0;
}
int sum_composite_numbers(int n, int a[n])
{
    int i, sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+is_composite(a[i] , sum);
    }
    return sum;
}

void input_array(int n, int a[])
{
    int i;
    printf("Enter %d numbers\n", n);
    for(i=0;i<n;i++)
         scanf("%d", &a[i]);
}
void output(int sum)
{
    printf("%d\n", sum);
}
int main()
{
    int n,sum=0,i;
    n=input_array_size();
    int a[n];
    input_array(n, a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}