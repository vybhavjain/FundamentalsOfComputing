#include<stdio.h>

main()
{
 int i;
 float x, sum, average;
 printf("Enter values one after another\n");
 printf("Enter a negative number to end the program\n");
 sum=0;
 for(i=0; i<1000;i++)
 {
  scanf("%f", &x);
  if(x<0)
   break;
  if(x==0)
   continue;
  sum+=x;
 }
 average = sum/(float) (i-1);
 printf("\nNumber of Values = %d\n", i);
 printf("Sum = %f\n", sum);
 printf("Average = %f\n", average);
}
