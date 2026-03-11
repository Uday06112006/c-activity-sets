#include<stdio.h>
#include <math.h>
typedef struct points
{
    float x, y;
}Point;
Point input_points()
{
    Point p;
    printf("Enter the co-ordinates of the point\n");
    scanf("%f %f", &p.x, &p.y);
    return p;
}
void find_distance(Point p1, Point p2, float *distance)
{
    *distance = sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
}
void output(Point p1, Point p2, float *distance)
{
    printf("The distance between the points (%.3f,%.3f) and (%.3f,%.3f) is = %.3f", p1.x, p1.y, p2.x, p2.y, *distance);
}
int main()
{
    Point p1, p2;
    float distance=0;
    p1=input_points();
    p2=input_points();
    find_distance(p1, p2, &distance);
    output(p1, p2, &distance);
    return 0;
}