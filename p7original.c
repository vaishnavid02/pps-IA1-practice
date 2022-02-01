#include<stdio.h>
typedef struct Complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex a;
  printf("enter the real part:");
  scanf("%f",&a.real);
  printf("enter the imaginary part:");
  scanf("%f",&a.imaginary);
  return a;
}
complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary = a.imaginary+b.imaginary;
  return sum;
}
void output(complex sum)
{
  printf("sum is %0.1f + %0.1fi",sum.real,sum.imaginary);
}
int main()
{
  complex c1,c2,sum;
  c1 = input();
  c2 = input();
  sum = add(c1,c2);
  output(sum);
  return 0;
}
