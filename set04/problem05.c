#include <stdio.h>
int input_n()
{
    int n;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    return n;
}
void input_array_elements(int n, int *a)
{
    int i;
    printf("Enter the %d elements\n", n);
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
}
int find_largest(int n, int *a)
{
    int largest=a[0], i;
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        largest=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(largest==a[i])
        return i;
    }
}
void output(int largest)
{
    printf("The index of the largest element in the given array elements is = %d", largest);
}
int main()
{
    int n, largest_i;
    n=input_n();
    int a[n];
    input_array_elements(n, a);
    largest_i=find_largest(n, a);
    output(largest_i);
    return 0;
}