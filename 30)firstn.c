#include<stdio.h>

main()
{
 int i,sum=0,n;
 printf("Enter the numbers");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 sum+=i;
 printf(" the sum of 1st n natural no’s is %d", sum);
}
