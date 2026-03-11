#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the numbers\n");
    scanf("%d %d %d %d", num1, den1, num2, den2);
}
int find_lcm(int den1, int den2, int rden)
{
     if (den1<den2)
    (rden)=den2;
    else
    (rden)=den1;
    while(1)
    {
        if((rden) % den1 == 0 && (rden) % den2 == 0)
        return rden;
        rden++;
    }
}
int find_gcd(int a,int b)
{
    while(b!=0)
    {
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
void add(int num1, int num2, int den1, int den2, int *rnum, int *rden)
{
    *rnum = (num1) *(*rden)/(den1) + (num2) * (*rden)/(den2) ;
}
void output(int num1, int num2, int den1, int den2, int rnum, int rden)
{
    printf("%d/%d + %d/%d = %d/%d",num1, den1, num2, den2, rnum, rden);
}
int main()
{
    int num1, num2, den1,  den2, rnum, rden, gcd;   
    input(&num1,&den1, &num2, &den2);
    rden=find_lcm(den1, den2, rden);
    add(num1, num2, den1,  den2, &rnum, &rden);
    gcd=find_gcd(rnum, rden);
    rnum=rnum/gcd;
    rden=rden/gcd;
    output(num1, num2, den1,  den2, rnum, rden);
    return 0;
}