#include<stdio.h>
#include <math.h>
int input_number()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    return a;
}
int is_composite(int n)
{
    int i;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i!=0)
        {
            return 1;
        }
    }
    return 0;
}
void output(int n, int result)
{
   if(result==0)
   {
    printf("The number %d is a composite number", n);
   } 
   else 
   {
    printf("The number %d is not a composite number", n);
   }
}
int main()
{
    int n, result;
    n=input_number();
    result=is_composite(n);
    output(n, result);
    return 0;
}