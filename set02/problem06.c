#include <stdio.h>
#include <string.h>
void input_string(char *a)
{
    printf("Enter the string\n");
    scanf("%s", a);
}
void string_rev(char *a, char *rev_str)
{
    int j=0, i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        rev_str[j]=a[i];
        i--;
        j++;
    }
    rev_str[j]='\0';
}
void output(char *rev_str)
{
    printf("%s", rev_str);
}
int main()
{
    char a[100], rev_str[100];
    input_string(a);
    string_rev(a, rev_str);
    output(rev_str);
    return 0;
}