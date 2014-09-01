#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

int head;
int tail;
int a[SIZE];

void enqueue(int value){ // insert value at tail position
	a[tail++] = value;
	tail = tail % SIZE;
}

int dequeue(){ // delete and return value at head position
	int temp = a[head++];
	head = head % SIZE;
	return temp;
}

int is_empty(){
	if(head == tail) return 1;
	else return 0;
}
int is_full(){
	if(((tail+1)%SIZE) == head) return 1;
	else return 0;
}

int main(){
	int i,x;
	for(i = 1; i <= 5; i++){
		scanf("%d",&x);
		if(!is_full()) enqueue(x);
	}
	
	if(!is_empty()) printf("%d",dequeue());
	
	return 0;
}
