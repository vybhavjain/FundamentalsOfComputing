#include<stdio.h>

main()
{
 int rem=0,temp=0;
 int num1=0, num2=0;
 printf("Enter 4-Digit Number\n");
 scanf("%d",&num1);
 temp = num1;
 while(temp)
 {
  rem = temp % 10;
  num2 = (num2 * 10) + rem;
  temp = temp / 10;
 }
 if(num1 == num2)
  printf("\n%d is a Palindrome Number",num1);
 else
  printf("\n%d is not a Palindrome Number",num1);
}
