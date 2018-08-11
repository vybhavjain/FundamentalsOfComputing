#include<stdio.h>

struct marks
{
 int sub1;
 int sub2;
 int sub3;
 int total;
};

main()
{
 int i;
 struct marks std[3] = {{45,67,81,0}, {75,53,69,0}, {57,36,71,0}};
 struct marks total = {0};
 for(i=0; i<=2; i++)
  std[i].total = std[i].sub1+ std[i].sub2+ std[i].sub3;
 printf("\nStudent Total\n");
 for(i=0; i<=2; i++)
  printf("Student[%d] %d\n",i+1, std[i].total);
}
