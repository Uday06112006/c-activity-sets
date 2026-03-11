#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the three points");
    scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float l1,l2,l3;
    l1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    l2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    l3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    if(l1+l2>l3||l2+l3>l1||l3+l1>l2)
    return 1;
    else
    return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    printf("3 points form a triangle");
    else if(result==0)
    printf("3 points do not form a triangle");
}
int main()
{
    int r;
    float x1,y1,x2,y2,x3,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    r=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,r);
    return 0;
}