#include<stdio.h>
#define PI 3.147

main()
{
 float radius = 0, length = 0, breadth = 0;
 float base = 0, height = 0, area = 0;
 int choice = 0;
 printf("Enter \n1 to find area of triangle\n2 to find area of Square");
 printf("\n3 to find area of circle\n4 to find area of rectangle\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  printf("\nEnter base & height of a triangle");
  scanf("%f%f",&base,&height);
  area = (1.0/2)*base*height;
  printf("\nArea of Triangle : %f", area);
  break;
  case 2:
  printf("\nEnter length of a Square");
  scanf("%f",&length);
  area = length * length;
  printf("\nArea of Square : %f", area);
  break;
  case 3:
  printf("\nEnter the radius of a Circle");
  scanf("%f",&radius);
  area = PI * radius * radius;
  printf("\nArea of Circle : %f", area);
  break;
  case 4:
  printf("\nEnter the length & breadth of a Rectangle");
  scanf("%f%f",&length,&breadth);
  area = length * breadth;
  printf("\nArea of Rectangle : %f", area);
  break;
  default:
  printf("\nInvalid Choice");
 }
}
