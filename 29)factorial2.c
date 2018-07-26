#include<stdio.h>

main()
{
 int N=0;
 int i=0;
 long int fact=1;
 printf("Enter a Number\n");
 scanf("%d",&N);
 i=N;
 if(N==0)
 {
  printf("\nFactorial of %d is : 1",N);
  exit(0);
 }
 else
 {
  for(i=N;i>=1;i--)
  fact=fact*i;
  printf("\nFactorial of %d is : %ld",N,fact);
 }
}
