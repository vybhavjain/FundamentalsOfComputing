#include<stdio.h>

main()
{
 int a,b,c;
 printf("Enter the three sides of triangle\n");
 scanf("%d%d%d",&a,&b,&c);
 ((a==b)&&(b==c))?printf("equilateral triangle"):(a==b||b==c||a==c)?printf("isosceles   triangle"): printf("scalene triangle");
}
