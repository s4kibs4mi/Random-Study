#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TOTAL_PERSON 4

int main() {
	struct manush {
		char name[50];
		int age;
	} person[TOTAL_PERSON];
	int i,j;
	for(i=0;i<TOTAL_PERSON;i++) {
		printf("Enter Name : ");
		gets(person[i].name);
		printf("Enter Age : ");
		scanf("%d",&person[i].age);
		getchar();
	}
	printf("\n");
	int max=0,index,min;
	for(i=0;i<TOTAL_PERSON;i++) {
		if(person[i].age>max) {
			max = person[i].age;
			index = i;
		}
	}
	for(i=0;i<TOTAL_PERSON;i++) {
		min = max+1;
		for(j=0;j<TOTAL_PERSON;j++) {
			if(person[j].age<min) {
				min = person[j].age;
				index = j;
			}
		}
		printf("Name : ");
		puts(person[index].name);
		printf("Age : %d\n",person[index].age);
		person[index].age = max+1;
	}
	return 0;
}
