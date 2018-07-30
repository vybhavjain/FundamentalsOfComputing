#include <stdio.h>
main()
{
 int a[10][10],b[10][10], i, j, row, col;
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
  printf("\n");
 }
 printf("\n\nTranspose of Matrix:\n\n");
 for (i=0; i<row; i++)
 {
  for (j=0; j<col; j++)
   b[j][i]=a[i][j];
 }
 for (i=0; i<col;i++)
 {
  for (j=0; j<row; j++)
   printf("\t%d", b[i][j]);
  printf("\n");
 }
}
