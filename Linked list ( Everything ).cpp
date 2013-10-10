#include<stdio.h>
#include<stdlib.h>

struct list {
	int data;
	struct list *next;
	struct list *prev;
};

typedef struct list node;

node *head;

int data_count=0; // variable to count the data of list

// Function to insert data in linked list
void insert(int input) {
	node *temp,*temp1;
	if(head==NULL) {
		temp = (node*)malloc(sizeof(node));
		temp->data = input;
		temp->next = NULL;
		head = temp;
	}
	else {
		temp = head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		temp1 = (node*)malloc(sizeof(node));
		temp1->data = input;
		temp1->next = NULL;
		temp->next = temp1;
	}
	printf("Data secussfully inserted.\n");
	data_count++;
	getchar();
	getchar();
	system("clear");
}

// Function to Delete data from linked list
void deletation(int input) {
	node *temp,*temp1;
	temp = head;
	if(head==NULL) printf("Empty list\n");
	else if(temp->data==input) {
		head = temp->next;
		delete temp;
		printf("Data Deleted sucessfully.\n");
		data_count--;
	}
	else {
		while(temp->next!=NULL) {
			if(temp->next->data==input) break;
			temp = temp->next;
		}
		if(temp->next==NULL) printf("Data not found.\n");
		else {
			temp1 = temp->next;
			temp->next = temp->next->next;
			delete temp1;
			printf("Data Deleted sucessfully.\n");
			data_count--;
		}
	}
	getchar();
	getchar();
	system("clear");
}

// Function to Display data in linked list
void show(void) {
	node *temp;
	temp = head;
	if(temp==NULL) printf("No data Avilable.");
	else {
		printf("Avilable data :\n");
		bool tab = false;
		while(temp!=NULL) {
			if(tab) printf("\t");
			tab = true;
			printf("%d",temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
	getchar();
	getchar();
	system("clear");
}

// Funtion to search data in linked list
bool search(int input) {
	node *temp = head;
	while(temp!=NULL) {
		if(temp->data==input) return true;
		temp = temp->next;
	}
	return false;
}
int main() {
	int choice,input;
	while(1) {
		printf("\t\t\tMENU\n\n1. Insert\n2. Delete\n3. Show\n4. Reverse Show\n5. Total data\n6. Search\n7. Exit\n");
		scanf("%d",&choice);
		switch (choice) {
			case 1:
				printf("Enter the value : ");
				scanf("%d",&input);
				insert(input);
				break;
			case 2:
				printf("Enter the value : ");
				scanf("%d",&input);
				deletation(input);
				break;
			case 3:
				show();
				break;
			case 4:
				//rev_show();
				break;
			case 5:
				printf("\nTotal %d data Avilabe in list.\n",data_count);
				getchar();
				getchar();
				system("clear");
				break;
			case 6:
				printf("Enter the value : ");
				scanf("%d",&input);
				if(search(input))
					printf("Data Found in the list\n");
				else printf("Data dont Found in the list\n");
				getchar();
				getchar();
				system("clear");
				break;
			case 7:
				exit(0);
			default:
				printf("Invalid Input\n:");
		}
	}
	return 0;
}
