#include<stdio.h>

main()
{
int  a,b;

printf("Enter two numbers \n");
scanf("%d%d",&a,&b);
printf("Before swapping a is %d, b is %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping a is %d, b is %d",a,b);

}
