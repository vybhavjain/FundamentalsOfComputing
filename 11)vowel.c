#include<stdio.h>

main()
{
 char ch;
 printf("Enter a lowercase letter\n");
 scanf("%c",&ch);
 (ch==’a’||ch==’e’||ch==’i’||ch==’o’||ch==’u’)?printf(" the entered character is vowel"): printf(" The entered character is consonant");
}
