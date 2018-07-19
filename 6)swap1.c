#include<stdio.h>

main()
{
 int a,b,temp;
 printf("Enter two numbers \n");
 scanf("%d%d",&a,&b);
 printf("Before swapping a is %d, b is %d\n",a,b);
 temp=a;
 a=b;
 b=temp;printf("After swapping a is %d, b is %d",a,b);
}
