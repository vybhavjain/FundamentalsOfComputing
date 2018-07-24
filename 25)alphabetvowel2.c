#include<stdio.h>

main()
{
 char ch;
 printf("Enter the alphabet\n");
 ch=getchar();
 switch(ch)
 {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  printf("Alphatbet is vowel");
  break;
  default: printf("Alphabet is consonant");
 }
}

