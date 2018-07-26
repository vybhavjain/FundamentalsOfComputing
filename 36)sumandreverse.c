#include<stdio.h>

main()
{
 int i=0,n=0;
 int sum=0, rev=0;
 printf("Enter a Number\n");
 scanf("%d",&n);
 i=n;
 do
 {
  sum=sum+(i%10);
  rev=(rev*10)+(i%10);
  i=i/10;
  }while(i>0);
 printf("\nSum of digits of the number %d is : %d",n,sum);
 printf("\n reverse of the number %d is : %d",n,rev);
}
