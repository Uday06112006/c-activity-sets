#include <stdio.h>
int input(char *string_1, char *string_2)
{
  printf("Enter two strings\n");
  scanf("%s %s", string_1, string_2);
}
int process(char *string_1, char *string_2)
{
  int i=0, r=0;
  while(string_1[i]!=0&&string_1[i]==string_2[i])
  {
    i++;
  }
  return string_1[i]-string_2[i];
}
int output(char *string_1, char *string_2, int r)
{
  if(r==0)
    printf("%s is equal to %s", string_1, string_2);
  else if(r<0)
     printf("%s is less than %s", string_1, string_2);
  else 
     printf("%s is grater than %s", string_1, string_2);   
}
int main()
{
  int r;
  char string_1, string_2;
  input(&string_1, &string_2);
  r=process(&string_1, &string_2);
  output(&string_1, &string_2, r);
  return 0;
}