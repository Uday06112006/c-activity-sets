#include <stdio.h>
#include<math.h>
typedef struct camel
{
    float height, length, radius;
}Camel;
int input_n()
{
    int n;
    printf("Enter the number of camels\n");
    scanf("%d", &n);
    return n;
}
void input_details(int n, Camel *c, float *truck_weight)
{
    for(int i=1;i<=n;i++)
    {
        printf("Enter the height of the camel %d\n", i);
        scanf("%f", &c[i].height);
        printf("Enter the length of the camel %d\n", i);
        scanf("%f", &c[i].length);
        printf("Enter the height of the camel %d\n", i);
        scanf("%f", &c[i].radius);
    }
    printf("Enter the weight of the truck\n");
    scanf("%f", truck_weight);
}
float find_t_weight(int n, Camel *c, float truck_weight)
{
    float t_weight=truck_weight, pi=3.14;
    for(int i=1;i<=n;i++)
    t_weight=t_weight+(pi*(pow(c[i].radius, 3))*(sqrt(c[i].height*c[i].length)));
    return t_weight;
}
void output(float t)
{
    printf("The total weight of the truck is %.3f", t);
}
int main()
{
    int n;
    n=input_n();
    Camel c[n+1];
    float truck_weight, t_weight;
    input_details(n, c, &truck_weight);
    t_weight=find_t_weight(n, c, truck_weight);
    output(t_weight);
    return 0;
}