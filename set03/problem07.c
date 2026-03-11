#include <stdio.h>
#include <math.h>
typedef struct point 
{
    float x, y;
}Point;
typedef struct Line
{
    Point p1, p2;
    float distance;
}Line;
Point input_points()
{
    Point p;
    printf("Enter the co-ordinates of the point \n");
    scanf("%f %f", &p.x, &p.y);
    return p;
}
void find_length(Line *l, Point *p1, Point *p2)
{
    l->distance=sqrt((p2->x-p1->x)*(p2->x-p1->x)+(p2->y-p1->y)*(p2->y-p1->y));
}
void output(Line l)
{
    printf("The length of the line is  = %f", l.distance);
}
int main()
{
    Point p1, p2;
    Line l;
    p1=input_points();
    p2=input_points();
    find_length(&l, &p1, &p2);
    output(l);
    return 0;
}