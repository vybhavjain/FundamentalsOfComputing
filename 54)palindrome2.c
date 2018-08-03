#include<stdio.h>

int palin() ;

main( )
{
 int flag=0;
 flag= palin();
 if(flag==1)
  printf("Number is a palindrome\n");
 else
  printf("Number is not a palindrome\n");
}

int palin()
{
 int m,rev=0,digit,num;
 printf("Enter the number ");
 scanf("%d",&num);
 m=num;
 while(num!=0)
 {
  digit=num%10;
  num=num/10;
  rev=rev*10+digit;
 }
 printf("Reversed number is : %d\n",rev);
 if(m==rev)
  return(1);
 else
  return(0);
}
