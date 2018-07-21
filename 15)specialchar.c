#include<stdio.h>
#include<ctype.h>

main()
{
 char ch;
 if(isalpha(ch))
  printf(" the enterd character is an alphabet");
 if(isdigit(ch))
  printf(" the enterd character is a digit");
 if(ispunct(ch))
  printf(" the enterd character is punctuation");
 if(isspace(ch))
  printf(" the enterd character is whitespace character");
}
