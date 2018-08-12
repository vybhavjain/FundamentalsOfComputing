#include<stdio.h>

main()
{
 int *p;
 int arr[20],sum=0;
 int i=0,n;
 printf("\nEnter the size of the array");
 scanf("%d",&n);
 printf("Enter the array elements\n");
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 p = arr;
 for(i=0;i<n;i++)
 {
  sum = sum + (*p);
  p++;
 }
 printf("\nSum : %d",sum);
}
