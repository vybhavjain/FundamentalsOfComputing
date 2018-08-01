#include<stdio.h>

main()
{
 char str1[20], str2[20];
 int i,j,flag=1;
 printf("\nEnter the First String\n");
 gets(str1);
 printf("\nEnter the Second String\n");
 gets(str2);
 i=0;
 j=0;
 while(str1[i]!='\0' || str2[j]!='\0')
 {
  if(str1[i]!=str2[j])
  {
   flag=0;
   break;
  }
  i++;
  j++;
 }
 if(flag==1)
 {
  printf("\n Strings are equal");
 }
 else
  printf("\n Strings are not equal");
}
