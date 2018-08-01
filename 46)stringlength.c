#include<stdio.h>

main()
{
 char str[20], c;
 int i=0;
 printf("\n Enter the String\n");
 gets(str);
 printf("\n\nEntered string is %s\n",str);
 while(str[i]!='\0')
  i++;
 printf("\n Length of the entered string is : %d",i);
}
