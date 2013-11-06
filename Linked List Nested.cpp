#include<stdio.h>
#include<stdlib.h>

struct bday{
	int day;
	int month;
	int year;
};

struct student{
	char name[100];
	int id;
	float mark;
	struct bday birthday;
	struct student *next;
};

typedef struct student node;

int main(){
	node *studentInfo;
	studentInfo = (node*)malloc(sizeof(node));
	printf("Enter Name : ");
	gets(studentInfo->name);
	printf("Enter ID : ");
	scanf("%d",&studentInfo->id);
	printf("Enter Mark : ");
	scanf("%f",&studentInfo->mark);
	printf("Enter Bith Date : ");
	scanf("%d",&studentInfo->birthday.day);
	printf("Enter Birth Month : ");
	scanf("%d",&studentInfo->birthday.month);
	printf("Enter Birth Year : ");
	scanf("%d",&studentInfo->birthday.year);
	printf("\n\n");
	printf("Hi,");
	puts(studentInfo->name);
	printf("Your id %d and mark %.2f\n",studentInfo->id,studentInfo->mark);
	printf("You born on %d-%d-%d",studentInfo->birthday.day,studentInfo->birthday.month,studentInfo->birthday.year);
	return 0;
}
