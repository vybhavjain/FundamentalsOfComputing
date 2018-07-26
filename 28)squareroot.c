#include<math.h>
#include<stdio.h>

main()
{
 int x,y;
 int count;
 count=1;
 printf("Enter Five Real values in a line\n");
 read:
 scanf("%d",&x);
 if(x<0)
 {
  printf("Entered Value is negative\n");
  goto negative; //forward jump
 }
 else
 {
  y=sqrt(x);
  printf("x=%d\tsqrt(x)=%d\n",x,y);
 }
 negative:
 count=count+1;
 if(count<=5)
  goto read; // backward jump
 printf("\n End of computation\n");
}
