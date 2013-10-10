#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct queue{
private:
	int head;
	int tail;
	int a[SIZE];
public:
	queue()
	{
		head = 0;
		tail = 0;
	}
	void enqueue(int value) // insert value at tail position
	{
		a[tail++] = value;
		tail = tail % SIZE;
	}
	int dequeue() // delete and return value at head position
	{
		int temp = a[head++];
		head = head % SIZE;
		return temp;
	}
	bool is_empty()
	{
		if(head == tail)return true;
		else return false;
	}
	bool is_full()
	{
		if(((tail+1)%SIZE) == head)return true;
		else return false;
	}
};

int main(){
	int data, ch,j=0;
	queue q,q1;
	while(1){
		printf("------MENU------\n");
		printf("1)  ENQUEUE\n");
		printf("2)  DEQUEUE\n");
		printf("3)  EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			if(!q.is_full())
			{
				scanf("%d",&data);
				q.enqueue(data);
				j++;
			}
			else printf("Queue full.....\n");
			break;
		case 2:
			if(!q.is_empty())
			{
				int i=1;
				while(i<j){
					data = q.dequeue();
					q1.enqueue(data);
					printf("%d\n",data);
					i++;
				}
				printf("%d\n",q.dequeue());
				printf("\n");
				while(!q1.is_empty()){
					data = q1.dequeue();
					q.enqueue(data);
					printf("%d\n",data);
				}
				j--;
			}
			else printf("Queue empty.....\n");
			break;
		case 3:
			exit(0);
		default:
			printf("Wrong input\n");
			break;
		}
	}
	return 0;
}
