#include<stdio.h>
#include<string.h>

main()
{
 char str[20], str1[20], str2[20], str3[20];
 int i=0;
 printf("\nEnter a string\n");
 gets(str);
 strcpy(str1,str);
 printf("\nCopied string is : %s\n",str1);
 printf("\nEnter a string\n");
 gets(str2); 
 if((strcmp(str,str2))==0)
  printf("\nStrings are equal\n");
 else
  printf("\nStrings are not equal\n");
 i = strlen(str);
 printf("\nLength of string %s is : %d\n",str,i);
 printf("\nConcatenated String is : %s\n",strcat(str,str2));
}
