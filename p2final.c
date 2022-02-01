#include<stdio.h>
int input()
{
  int a;
  printf("enter your number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if ((b>c))
  return b;
  else 
  return c;
}
void output(int a,int b,int c,int big)
{
  printf("bigger value between %d,%d and %d is %d",a,b,c,big);
}
int main()
{
  int a,b,c,big;
  a=input();
  b=input();
  c=input();
  big=cmp(a,b,c);
  output(a,b,c,big);
  return 0;
}
