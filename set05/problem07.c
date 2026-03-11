#include<stdio.h>
void input(char *name)
{
    printf("Enter the name of the camel\n");
    scanf("%s", name);
}
int has_good_name(char *name)
{
    int i=0, v=0;
    while(name[i]!=0)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        v++;
        i++;
    }
    if(v>=2&&i>=4)
    return 1;
    else 
    return 0;
}
void output(int t, char *name)
{
    if(t==1)
    printf("The camel %s is good name", name);
    else
    printf("The camel %s not have a good name", name);
}
int main()
{
    char name[100];
    int t;
    input(name);
    t=has_good_name(name);
    output(t, name);
    return 0;
}