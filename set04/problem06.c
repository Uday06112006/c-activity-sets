#include <stdio.h>
#include <string.h>
void input_string(char *a, int n)
{
    printf("Enter the string\n");
    if(fgets(a, n, stdin))
    a[strcspn(a,"\n")]='\0';
}
int count_words(char *a)
{
    int i=0, n=1;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        n++;
        i++;
    }
    return n;
}
int main()
{
    char a[80];
    int n;
    input_string(a, sizeof(a));
    printf("%s\n", a);
    n=count_words(a);
    printf("%d\n", n);
    return 0;
}