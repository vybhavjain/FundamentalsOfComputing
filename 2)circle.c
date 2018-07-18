#include<stdio.h>

#define PI 3.142
main()
{
float r,area,circum;

printf("Enter the radius of the circle\n");
scanf("%f",&r);
area=PI*r*r;
circum=2*PI*r;
printf("Area of circle is %f and circumfernce of circle is %f",area,circum);

}
