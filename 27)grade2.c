#include<stdio.h>

main()
{
 int a,b,c,d,e,f,total,per=0,ch;
 printf("Enter the marks in 6 subjects\n");
 scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
 if((a<40)||(b<40)||(c<40)||(d<40)||(e<40)||(f<40))
  printf("Grade is F");
 else
 {
  total=a+b+c+d+e+f;
  per=total/6;
  printf("total = %d\n",total);
  printf("per=%d\n",per);
  ch=per/10;
  switch(ch)
  {
   case 10:
   case 9:
   case 8: printf("Grade is S");
   break;
   case 7: printf("Grade is A");
   break;
   case 6: printf("Grade is B");
   break;
   case 5: printf("Grade is C");
   break;
   case 4:printf("Grade is D");
   break;
   default: printf("Invalid marks");
  }
 }
}
