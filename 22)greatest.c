#include<stdio.h>

main()
{
 int a, b, c;
 printf("Enter 3 numbers");
 scanf("%d%d%d", &a,&b,&c);
 if(a>b)
 {
  if(a>c)
   printf("\n%d is largest", a);
  else
   printf("\n%d is largest", c);
 }
 else
 {
  if(b>c)
   printf("\n%d is largest", b);
  else
   printf("\n%d is largest", c);
 }
}
