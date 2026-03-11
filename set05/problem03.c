#include <stdio.h>
#include <math.h>
typedef struct camel
{
    float height, length, radius;
}Camel;
Camel input_camel_details()
{
    Camel c;
    printf("Enter the details of the camel\n");
    scanf("%f%f%f", &c.height, &c.length, &c.radius);
    return c;
}
float find_weight(Camel c)
{
    float w, pi=3.14;
    w=pi*pow(c.radius, 3)*sqrt(c.height*c.length);
    return w;
}
void output(float weight, Camel c)
{
    printf("The weight of the camel with radius %.3f, height %.3f and length %.3f is = %.3f",c.radius, c.height, c.length, weight);
}
int main()
{
    Camel c;
    float weight;
    c=input_camel_details();
    weight=find_weight(c);
    output(weight, c);
    return 0;
}