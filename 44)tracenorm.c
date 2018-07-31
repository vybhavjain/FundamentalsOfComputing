#include<stdio.h>
#include<math.h>

main()
{
 int a[10][10];
 int i=0, j=0;
 int rows=0, cols=0;
 int trace=0, norm=0;
 printf("Enter the number of rows & columns for the first matrix\n");
 scanf("%d%d", &rows,&cols);
 printf("\nEnter the elements for the First Matrix:\n");
 for(i=0;i<rows;i++)
  for(j=0;j<cols;j++)
   scanf("%d",&a[i][j]);
 printf("\nMatrix is :\n");
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
   printf("%d\t",a[i][j]);
  printf("\n");
 }
 for(i=0;i<rows;i++)
  for(j=0;j<cols;j++)
  {
   if(i==j)
   trace = trace + a[i][j];
   norm += pow(a[i][j],2);
  }
 norm=sqrt(norm);
 printf("\n Trace of the Entered Matrix : %d", trace);
 printf("\n Norm of the Entered Matrix : %d", norm);
}
