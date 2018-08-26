#include<stdio.h>
main()
{
	FILE *fp;
	int i;
	char namr[20];
	fp=fopen("Details.TXT","w");
	if(fp==NULL)
	{
		printf("\n The file could not be open");
		exit(1);
	}
	for(i=0;i<10;i++)
	{
		puts("\n Enter your name;");
		gets(name);
		fflush(stdin);
		puts("\n enter your name:");
		scanf("%f",&salary);
		fprintf(fp,"(%d) NAME:[%-10.10s]\t SALARY %5.2f",I,name,salary);
	}
	fclose(fp);
}
