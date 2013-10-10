#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int push(int stack_a[],int value,int tail){
    if(tail+1>=SIZE) printf("Stack Overflow.\n");
    else{
        stack_a[++tail] = value;
    }
    return tail;
}

int pop(int a[],int tail){
    int stack_b[SIZE],i;
    if(tail==-1) printf("Stack Underflow.\n");
    else{
        for(i=1;i<=tail;i++) stack_b[i-1] = a[i];
        for(i=0;i<=tail;i++) a[i] = stack_b[i];
        tail--;
    }
    return tail;
}

void show(int a[],int tail){
    int i;
    for(i=0;i<=tail;i++) printf("> %d ",a[i]);
    printf("\n");
}

int main(){
    int stack_a[SIZE],data,choice,tail=-1;
    while(1){
        printf("1. Push\n2. Pop\nEnter Choice : ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Enter value : ");
            scanf("%d",&data);
            tail = push(stack_a,data,tail);
            show(stack_a,tail);
            break;
        case 2:
            tail = pop(stack_a,tail);
            show(stack_a,tail);
            break;
        }
    }
    return 0;
}
