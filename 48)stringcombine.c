#include<stdio.h>

main()
{
 char str1[20], str2[20];
 char new_str[40];
 int i,j;
 printf("\nEnter the First String\n");
 gets(str1);
 printf("\nEnter the Second String\n");
 gets(str2);
 i=0;
 while(str1[i]!='\0')
 {  
  new_str[i]=str1[i];
  i++;
 }
 j=0;
 while(str2[j]!='\0')
 {
  new_str[i]=str2[j];
  i++;
  j++;
 }
 new_str[i]='\0';
 printf("\nNew String is : %s",new_str);
}
