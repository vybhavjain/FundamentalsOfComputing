#include<stdio.h>

main()
{
 int num;
 printf("Enter the number\n");
 scanf("%d", &num);
 (num%4==0)&&(num%100!=0)||(num%400==0)?printf("The entered year is leap year"):  printf("The entered year is not leap year");  
}
