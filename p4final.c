

#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of array=\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  printf("enter elements of array=\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int i=n,sum=0;
  for(n=0;n<i;n++)
  {
    sum=sum+a[n];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  int i=n;
  for(n=0;n<(i-1);n++)
  {
    printf("%d+",a[n]);
  }
  printf("%d=%d",a[(i-1)],sum);
}
int main()
{
  int n,sum,a[1000];
  n=input_array_size();
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);
  return 0;
}
