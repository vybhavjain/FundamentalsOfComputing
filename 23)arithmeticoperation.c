#include<stdio.h>
#include<stdlib.h>

main()
{
 float a=0, b=0, result=0;
 char opcode;
 printf("Enter 2 Numbers");
 scanf("%f%f",&a,&b);
 //fflush(stdin);
 printf("\nEnter + to add\n - to subtract\n * to multiply\n / to divide");
 scanf("%c",&opcode);
 switch(opcode)
 {
  case '+':
  result = a+b;
  printf("\nSum of %f & %f is : %f", a,b,result);
  break;
  case '-':
  result = a-b;
  printf("\nSubtraction of %f & %f is : %f", a,b,result);
  break;
  case '*':
  result = a*b;
  printf("\nMultiplication of %f & %f is : %f", a,b,result);
  break;
  case '/':
  if(b==0)
  {
   printf("Divide By Zero Error\n");
   exit(0);
  }
  else
  {
   result = a/b;
   printf("\nDivision of %f & %f is : %f", a,b,result);
  }
  break;
  default: printf("\nInvalid Operator");
 }
}
