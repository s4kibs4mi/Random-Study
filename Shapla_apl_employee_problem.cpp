#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TOTAL_HUMAN 10

int main() {
	struct human {
		char name[50];
		int salary;
		int age;
	} employee[TOTAL_HUMAN];

	int i;
	for(i=0;i<TOTAL_HUMAN;i++) {
		printf("Enter Name of Employee [%d] : ",i+1);
		gets(employee[i].name);
		printf("Enter Age of Employee [%d] : ",i+1);
		scanf("%d",&employee[i].age);
		printf("Enter Salary of Employee [%d] : ",i+1);
		scanf("%d",&employee[i].salary);
		getchar();
	}
	printf("\n");
	for(i=0;i<TOTAL_HUMAN;i++) {
		if(employee[i].salary>=10000) {
			printf("Name : ");
			puts(employee[i].name);
			printf("Age : %d\n",employee[i].age);
			printf("Salary : %d\n",employee[i].salary);
		}
	}
	return 0;
}
