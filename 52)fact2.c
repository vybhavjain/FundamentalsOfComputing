#include<stdio.h>
int fact(int num);

main( )
{
 int n,factorial;
 printf("Enter the number\n");
 scanf("%d",&n);
 if(n==0)
  printf("Factorial of %d is : 1",n);
 else
 {
  factorial=fact(n);
  printf("Factorial of %d is : %d",n,factorial);
 }
}

int fact(int num)
{
 int i,f=1;
 for(i=1;i<=num;i++)
  f=f*i;
 return(f);
}
