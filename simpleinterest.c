#include<stdio.h>

main()
{
float p,t,r,si;

printf("Enter the principal, time and rate of interest \n");
scanf("%f%f%f",&p,&t,&r);
si=(p*t*r)/100;
printf("Simple Interest is  %f",si);

}

