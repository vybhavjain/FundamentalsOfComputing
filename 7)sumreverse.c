#include<stdio.h>

main()
{
 int num, num1,a,b,c,d,sum=0,rev=0;
 printf(“Enter the 4 digit number\n”);
 scanf(“%d”, &num);
 num1=num;
 a=num%10;
 num=num/10;
 b=num%10;
 num=num/10;
 c=num%10;
 num=num/10;
 d=num%10;
 sum=a+b+c+d;
 rev=(a*1000)+(b*100)+(c*10)+d;
 printf(“ the sum of the digits of number %d is %d”, num1,sum);
 printf(“ The reverse of the number %d is %d”,num1,rev);
}
