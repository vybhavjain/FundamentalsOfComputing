Without using built in functions
#include<stdio.h>

main()
{
 char ch;
 printf("Enter a character\n"); 
 scanf("%c",&ch);
 if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
  printf("\n%c is an Alphabet",ch);
 else if(ch>=48 && ch<=56)
  printf("\n%c is a Number",ch);
 else
  printf("\nSpecial Character");
}

Using built in functions
#include<stdio.h>
#include<ctype.h>

main()
{
 char ch;
 printf("Enter a character\n");
 scanf("%c",&ch);
 if(isalpha(ch)) 
  printf("\n%c is an Alphabet",ch);
 else if(isdigit(ch))
  printf("\n%c is a Digit",ch);
 else
  printf("It is a special character\n");
}

