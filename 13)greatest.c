#include<stdio.h>

main()
{
 int a,b,c;
 printf("Enter the three numbers\n");
 scanf("%d%d%d", &a,&b,&c);
 (a>b)?((a>c)?printf("%d is largest",a):  printf("The %d is largest",c)):((b>c)?printf("%d is largest",b):printf("%d is largest",c));
}
