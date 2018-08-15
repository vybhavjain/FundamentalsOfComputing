#include<stdio.h>

main()
{
 int *p, *q;
 int a=0, b=0;
 int temp;
 printf("\nEnter two numbers");
 scanf("%d%d",&a,&b);
 p = &a;
 q = &b;
 printf("\nBefore Swapping\n");
 printf("a : %d\nb : %d\n",a,b);
 temp = *p;
 *p = *q;
 *q = temp;
 printf("\nAfter Swapping\n");
 printf("a : %d\nb : %d\n",a,b);
}
