#include<stdio.h>

struct class
{
	int number;
	char name[20];
	float marks;
};

main()
{
	int x;
	struct class std1 ={11, "PQR", 88.5};
	struct class std2 ={12, "STU", 78.5};
	struct class std3;
	std3 = std2;
	x = ((std3.number == std2.number) && (std3.marks == std2.marks)) ? 1:0 ;
	if(x==1)
	{
		printf("\n Student2 & student3 are same\n");
		printf("%d\t%s\t%f\n", std3.number, std3.name, std3.marks);
	}
	else
	  printf("Student2 & student3 are different");
	printf("\nStudent1 Details\n");
	printf("%d\t%s\t%f\n", std1.number, std1.name, std1.marks); 
}


