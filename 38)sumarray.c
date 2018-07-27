#include<stdio.h>

main()
{
 int arr[20];
 int i=0, sum=0, size;
 printf("Enter the size of the array");
 scanf("%d",&size);
 printf("\nEnter %d elements into Array",size); 
 for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
 printf("\nArray Elements are :\n");
 for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
 for(i=0;i<size;i++)
  sum = sum + arr[i];
 printf("\n\nSum of Array Elements : %d",sum);
}
