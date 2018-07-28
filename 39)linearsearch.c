#include<stdio.h>

main()
{
 int arr[20];
 int i=0, size=0;
 int key=0, flag=0;
 printf("Enter the size of the array");
 scanf("%d",&size);
 printf("\nEnter %d elements into Array",size);
 for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
 printf("\nArray Elements are :\n");
 for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
 printf("\nEnter the element to search in the array");
 scanf("%d", &key);
 for(i=0;i<size;i++)
 {
  if(key == arr[i])
  {
   flag = 1;
   break;
  }
 }
if(flag == 1)
 printf("\n%d is found at position %d",key,i+1);
else
 printf("\nKey not found");
}
