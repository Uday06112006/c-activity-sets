#include<stdio.h>
#include<math.h>
typedef struct point
{
    float x, y;
}Point;
typedef struct line 
{
    Point p[100];
    float distance;
}Line;
int input_n()
{
    int n;
    printf("Enter the number of sides\n");
    scanf("%d", &n);
    return n;
}
Point input_point()
{
    Point p;
    printf("Enter the co-ordinates of the point\n");
    scanf("%f %f", &p.x, &p.y);
    return p;
}
Line find_distance(Point p1, Point p2)
{
    Line l;
    l.distance=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    return l;
}
float perimeter_polygon(Line l, float perimeter)
{
    perimeter = perimeter + l.distance;
    printf("%.3f ", perimeter);
    return perimeter;
}
int main()
{
    int n, i;
    float perimeter=0.0;
    n=input_n();
    Point p[n];
    Line l[n];
    for(i=0;i<n;i++)
        p[i]=input_point();
    for(i=0;i<n-1;i++)
        l[i]=find_distance(p[i], p[i+1]);
    l[i]=find_distance(p[0], p[i]);
    for(i=0;i<n;i++)
        perimeter=perimeter_polygon(l[i], perimeter);
    printf("%.3f", perimeter);
    return 0;
}
