#include<stdio.h>
#include<string.h>
void input_two_string(char *a,char *b)
{
  printf("enter word 1= \n");
  scanf("%s",a);
  printf("enter word 2=\n");
  scanf("%s",b);
}
int strcmpr(char *a,char *b)
{
  int result;
  while((*a==*b)&&(*a&&*b))
  {
    a++;
    b++;
  }
  result=*a-*b;
  return result;
}
void output(char *a, char *b, int result)
{
  if (result == 0)
  {
  printf("%s is equal to %s\n",a,b);}
  else if (result < 0){
  printf("%s is greater than %s\n",b,a);}
  else {
  printf("%s is greater than %s",a,b);}
}
int main()
{
  char a[1000],b[1000];
  int result;
  input_two_string(a,b);
  result=strcmpr(a,b);
  output(a,b,result);
  return 0;
}
l
