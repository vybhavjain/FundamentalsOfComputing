#include<stdio.h>

void gcd_lcm(int m, int n);

main( )
{
  int x,y;
 printf("Enter two numbers\n");
 scanf("%d%d",&x,&y);
 gcd_lcm(x,y) ;
 getch() ;
 }

void gcd_lcm(int m, int n)
{
 int p,q,gcd,lcm,r ;
 p=m;
 q=n;
 while(n!=0)
 {
  r=m%n;
  m=n;
  n=r;
 }
 gcd=m;
 lcm=p*q/gcd;
 printf("GCD of %d and %d is : %d\n",p,q,gcd);
 printf("LCM of %d and %d is : %d\n",p,q,lcm);
}
