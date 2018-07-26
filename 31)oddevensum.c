#include<stdio.h>

main()
{
 int n,i,OSum=0, ESum=0;
 printf("Enter the value of N\n");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  if(i%2==0)  
   ESum=ESum+i;
  else
   OSum=OSum+i;
 }
 printf("\nSum of Even Numbers from 1 to %d is : %d",n,ESum);
 printf("\nSum of Odd Numbers from 1 to %d is : %d",n,OSum);
}
