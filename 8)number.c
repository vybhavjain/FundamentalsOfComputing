#include<stdio.h>
main()
{
 int num;
 printf(“Enter the number \n”);
 scanf(“%d”, &num);
 (num==0)? printf(“ The number is zero”):(num>0)? printf(“The  number is positive”):  printf(“The number is negative”);
}
