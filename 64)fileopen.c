#include<stdio.h>

main()
{
	FILE *fp;
	fp=fopen("Student.DAT","r");
	if(fp==NULL)
	{
		printf("\n The file could not be open");
		exit(1);
	}
}
