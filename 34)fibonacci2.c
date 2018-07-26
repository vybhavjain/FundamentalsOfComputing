#include<stdio.h>

main()
{
 int i=0,n=0;
 int a=0,b=1,fib=0;
 printf("Enter a Number\n");
 scanf("%d",&n);
 if(n<=0)
 {
  printf("\nInvalid Input");
  exit(0);
 }
 printf("\nFibonacci Series :\n\n");
 if(n==1)
  printf("%d\t",a);
 else if(n>=2)
 {
  printf("%d\t",a);
  printf("%d\t",b);
  for(i=0;i<n-2;i++)
  {
   fib = a + b;
   printf("%d\t",fib);
   a = b;
   b = fib;
  }
 }
 printf("\n\nFibanocci Series Ends");
}
