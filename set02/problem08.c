#include <stdio.h>
typedef struct _triangle 
{
    float base, altitude, area;
}Triangle;
int input_n()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}
Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base and the altitude\n");
    scanf("%f%f", &t.base,&t.altitude);
    return t;
}
void input_n_triangles(int n, Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
    t[i]=input_triangle();
}
void find_area(Triangle *t)
{
    t->area=(t->base*t->altitude)/2;
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    int i;
    Triangle smallest=t[0];
    for(i=0;i<n;i++)
    {
        if(smallest.area>t[i].area)
        smallest=t[i];
    }
    return smallest;
}
void output(int n, Triangle t[n],Triangle smallest)
{
    printf("The smallest triangle is having the base %.2f and altitude %.2f with area %.2f",smallest.base, smallest.altitude, smallest.area); 
}
int main()
{
    int n, i;
    n=input_n();
    Triangle t[n], smallest;
    input_n_triangles(n, t);
    for(i=0;i<n;i++)
    find_area(&t[i]);
    smallest=find_smallest_triangle(n, t);
    output(n, t, smallest);
    return 0;
}