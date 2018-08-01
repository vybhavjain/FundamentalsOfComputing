#include<stdio.h>

 main()
{
 char str[20];
 int i=0,j,l;
 int flag=1;
 printf("\nEnter a string\n");
 gets(str);
 printf("\nEntered string is : %s\n",str);
 while(str[i]!='\0')
 {
  i++;
 }
 l=i;
 i--;
 j=0;
 while(j<l/2)
 {
  if(str[j]!=str[i])
  {
   flag=0;
   break;
  }
 j++;
 printf("j=%d",j);
 i--;
 }
 if(flag==1)
  printf("\n Entered string is a Palindrome\n");
 else
  printf("\n Entered string is not a Palindrome\n");
}
