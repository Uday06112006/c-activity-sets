#include <stdio.h>
#include<math.h>
void input_camel_details(float *height, float *length, float *radius)
{
    printf("Enter the height, length, and the radius of the camel\n");
    scanf("%f%f%f", height, length, radius);
}
float find_weight(float height, float length, float radius)
{
    float weight, pi=3.14;
    weight=pi*(pow(radius, 3))*(sqrt(height*length));
    return weight;
}
float output(float height, float length, float radius, float weight)
{
    printf("The weight of the camel with the height %.3f, length %.3f and radius %.3f is %.3f",height, length, radius, weight);
}
int main()
{
    float height, length, radius, weight;
    input_camel_details(&height, &length, &radius);
    weight=find_weight(height, length, radius);
    output(height, length, radius, weight);
    return 0;
}