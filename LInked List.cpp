#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct list {
	int data;
	struct list *next;
};

typedef struct list node;

node* insertion(node *start,int newitem);
node* deletion(node *start, int item);
void display(node *head);
void menu(void);

void menu(void)
{
	printf("\n+++++++ MENU +++++++\n\n1. Insertion\n2. Deletion\n3. Display\nAny key to exit except the above");
}

node* insertion(node *start,int newitem)
{
	node *temp,*temp1;
	if(start == NULL)
	{
		temp1 = (node*)malloc(sizeof(node));
		temp1->data = newitem;
		temp1->next = NULL;
		start = temp1;
	}
	else if(start->data >= newitem)
	{
		temp1 = (node*)malloc(sizeof(node));
		temp1->data = newitem;
		temp1->next = start;
		start = temp1;
	}
	else
	{
		temp = start;
		while((temp->next != NULL) && (temp->next->data<=newitem))
			temp = temp->next;
		temp1 = (node*)malloc(sizeof(node));
		temp1->data = newitem;
		temp1->next = temp->next;
		temp->next = temp1;
	}
	printf("\nData Sucessfully Inserted...\n");
	return start;
}

void display(node *head)
{
	node *temp;
	printf("\n Avilable Lists :\n");
	temp = head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

int main()
{
	node *start;
	int choice,newitem,item;
	start = NULL;
	do{
		menu();
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			system("clear");
			printf("Enter an item :");
			scanf("%d",&newitem);
			start = insertion(start,newitem);
			break;
		case 2:
			break;
		case 3:
			system("clear");
			display(start);
			break;
		default:
			return 0;
		}
	}while(1);
	return 0;
}
