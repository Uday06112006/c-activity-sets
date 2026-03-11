#include<stdio.h>
int input_n()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}
void input_array_elements(int n, int *a)
{
    printf("Enter the %d elements\n", n);
    for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
}
float odd_average(int n, int *a)
{
    int t=0;
    float avg=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
        avg=avg+a[i];
        t++;
        }
    }
    return avg/t;
}
void output(float avg)
{
    printf("The average of the given odd numbers in the array is = %.3f", avg);
}
int main()
{
    int n;
    float avg;
    n=input_n();
    int a[n];
    input_array_elements(n, a);
    avg=odd_average(n, a);
    output(avg);
    return 0;
}