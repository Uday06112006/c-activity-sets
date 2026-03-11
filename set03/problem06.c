
#include<stdio.h>
void input_string(char *a, char*b)
{
    printf("Enter two strings \n");
    scanf("%s %s", a, b);
}
int sub_string_index(char *string, char *substring)
{
    int i=0, j=0, k=0, l=0;
    char *a[50];
    while(substring[k]!='\0')
    {
        k++;
    }
    while(string[l]!='\0')
    {
        l++;
    }
    if(k>l)
    {
    *a=string;
    string=substring;
    substring=*a;
    k=l;
    }
    while(substring[i]!='\0')
    {
        while(string[j]!='\0')
        {
            printf("%c %c \n", substring[i], string[j]);
            if(string[j]==substring[i])
            {
                j++;
                break;
            }
            j++;
        }
        i++;
    }
     if(string[j]=='\0')
        {
            printf(" %d %d ", j, k);
            return -1;
        }
    return j-k;
}
int main()
{
    char a[50], b[50];
    int pos;
    input_string(a, b);
    pos=sub_string_index(a, b);
    if(pos>=0)
    printf("%d", pos);
    else
    printf("\n %s not in %s", b, a);
    return 0;
}