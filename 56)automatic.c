#include<stdio.h>

void func1(void);
void func2(void);

main()
{
 int m=1000;
 func2();
 printf("%d\n",m);
}

void func1(void)
{
 int m=10;
 printf("%d\n",m);
}

void func2()
{
 int m=100;
 func1();
 printf("%d\n",m);
}

