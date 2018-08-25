#include<stdio.h>

main()
{
	FILE *fp;
	char name[80];
	int roll_no;
	fp=fopen("Student.dat","r");
	if(fp==NULL)
	{
		printf("\n The file couldnot be opened");
		exit(1);
	}
	printf("\n Enter the name and roll number of the student:");
	fscanf(stdin,"%s %d",name,&roll_no);
	printf("\n Name: %s\t ROLL NUMBER=%d",name,roll_no);
	fclose(fp);
	return 0;
}
