#include<stdio.h>

main()
{
 int a=0, b=0, rem=0, lcm=0;
 int temp1=0, temp2=0;
 printf("Enter 2 numbers\n");
 scanf("%d%d",&a,&b);
 temp1=a;
 temp2=b;
 do
 {
  rem=a%b;
  a=b;
  b=rem;
 }while(rem);
 printf("\nGCD of %d and %d is : %d",temp1,temp2,a);
 lcm = (temp1 * temp2)/a;
 printf("\nLCM of %d and %d is : %d",temp1,temp2,lcm);
}
