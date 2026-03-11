#include <stdio.h>
void input_camel_details(float *height, float *radius, float *length)
{
    printf("Enter the details of the camel\n");
    scanf("%f%f%f", height, radius, length);
}
float find_mood(float h, float r, float l)
{
    if(h>r)
    h=r;
    if(h>l)
    h=l;
    return h;
}
void output(float height, float radius, float length, float m)
{
    if(m==radius)
    printf("the camel is Sick\n");
    else if(m==height)
    printf("The camel is Happy");
    else
    printf("The camel is Tesnse");
}
int main()
{
    float height, length, radius, mood;
    input_camel_details(&height, &radius, &length);
    mood=find_mood(height, radius, length);
    output(height, radius, length, mood);
    return 0;
}