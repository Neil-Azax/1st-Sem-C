#include<stdio.h>

struct Employee
{
	int id;
	float sal;
};

int main()
{
	struct Employee emp[5];
	
	for(int i=0; i<5; i++)
	{
		printf("Enter the Employee %d id and salary \n",i+1);
		scanf("%d %f",&emp[i].id, &emp[i].sal);
	}
	
	for(int i=0; i<5; i++)
	{
		printf("For employe %d\n", i+1);
		printf("id = %d\n",emp[i].id);
		printf("salary = %0.2f\n", emp[i].sal);
		printf("****************************\n");
	}
	
	return 0;
}

