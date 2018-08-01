#include <stdio.h>

main()
{
 int a[10][10], i, j, row, col,flag=0;
 printf("\nEnter no. of rows & columns: ");
 scanf("%d %d", &row, &col);
 printf("\nEnter elements of Matrix:\n");
 for (i=0; i<row; i++)
  for (j=0; j<col; j++)
   scanf("%d", &a[i][j]);
 printf("\n\nElements of Matrix:\n\n");
 for (i=0; i<row; i++)
 {
  for (j=0; j<col; j++)
   printf("\t%d", a[i][j]);
  printf("\n\n");
 } 
 for (i=0; i<col; i++)
 {
  for (j=0; j<row; j++)
   if(a[j][i]!=a[i][j])
    flag=1;
 }
 if(flag==1)
  printf(" Not symmetric");
 else
  printf("Symmetric");
}
