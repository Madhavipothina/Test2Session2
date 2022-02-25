#include<stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  int i;
  for(i=2;i<sqrt(n);i++)
  if(n%i==0)
    return 0;
  else
   return 1;
}
void output(int n,int isprime)
{
  if(isprime==0)
   printf("the number is composite\n");
 else
   printf("the number is prime\n");  
}
int main()
{
  int n, isprime;
  n=input_number();
  isprime=is_prime(n);
  output(n,isprime);
  return 0;
}
