#include<stdio.h>
#include<stdlib.h>

main()
{
 long int m1=0, m2=0, m3=0, m4=0, m5=0, m6=0;
 long int perce=0;
 printf("Enter the marks for 6 subjects");
 scanf("%ld%ld%ld%ld%ld%ld",&m1,&m2,&m3,&m4,&m5,&m6); 
 perce = ((m1+m2+m3+m4+m5+m6)*100/600);
 if( (m1<50) || (m2<50) || (m3<50) || (m4<50) || (m5<50) || (m6<50))
 {
  printf("Fail");
  exit(0);
 }
 printf("\nPercentage : %ld\n",perce);
 if(perce >= 90)
  printf("\n S grade");
 else if(perce >= 80)
  printf("\n A grade");
 else if(perce >= 70)
  printf("\n B grade");
 else if(perce >= 60)
  printf("\n C grade");
 else if(perce >= 50)
  printf("\n D grade");
 else
  printf("\n Fail");
}
