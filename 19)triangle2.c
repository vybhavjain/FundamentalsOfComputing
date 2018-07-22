#include<stdio.h>

main()
{
 int a, b, c;
 printf("Enter 3 sides of a triangle");
 scanf("%d%d%d", &a,&b,&c);
 if(a==b && b==c && a==c)
  printf("\nTriangle is Equilateral Triangle");
 else if((a==b || a==c) || (b==a || b==c) || (c==a || c==b))
  printf("\nTriangle is Isosceles Triangle");
 else
  printf("\nTriangle is Scalene Triangle");
}
