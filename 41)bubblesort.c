#include<stdio.h>

main()
{
 int a[10],i,j,temp,n;
 printf("Enter the no. of elements in an array\n");
 scanf("%d",&n);
 printf("Enter elements of the array\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("The elements of array before sorting are\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
 for(i=0;i<n-1;i++)
  for(j=1;j<n-i;j++)
   if(a[j]<a[j-1])
   {
    temp=a[j];
    a[j]=a[j-1];
    a[j-1]=temp;
   }
 printf("\nThe elements of array before sorting are\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}



