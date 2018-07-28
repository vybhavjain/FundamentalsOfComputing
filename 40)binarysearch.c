#include<stdio.h>

main()
{
 int arr[20];
 int i=0, size=0;
 int key=0, flag=0;
 int high=0, low=0, mid=0;
 printf("Enter the size of the array");
 scanf("%d",&size);
 printf("\nEnter %d elements into Array in ascending order",size);
 for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
 printf("\nArray Elements are :\n");
 for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
 printf("\nEnter the element to search in the array\n");
 scanf("%d", &key);
 high = size - 1;
 low = 0;
 while(low<=high)
 {
  mid = (high + low)/2;
  if(key > arr[mid])
  {
   low = mid + 1;
  }
  if(key < arr[mid])
  {
   high = mid - 1;
  } 
  if(key == arr[mid])
  {
   flag = 1;
   break;
  }
 }
 if(flag == 1)
  printf("\n%d is found at position %d",key,mid+1);
 else
  printf("\nKey not found");
}
