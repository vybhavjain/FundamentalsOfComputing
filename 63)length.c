#include<stdio.h>

main()
{
	int length=0;
	char *p;
	char str[20];	
	printf("\nEnter a string\n");
	scanf("%s", str);
  p = str; 
  while((*p)!='\0')
	{
    length++;
		p++;
	}
	printf("\nLength of the %s is : %d", str,length);
}

