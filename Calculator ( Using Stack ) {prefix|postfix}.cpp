#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

struct stack
{
  private: int head; int A[SIZE];
  public: stack()
          {
              head=0;
          }
          int top(void){
                return A[head];
          }
          int limit(void){
                return head;
          }
          void push(int data)
          {
              A[head++]=data;
          }
          int pop()
          {
              return A[--head];
          }
          bool is_full()
          {
              if(head==SIZE) return true;
              else return false;
          }
          bool is_empty()
          {
              if(head == 0) return true;
              else return false;
          }
};

int main(int argc, char *argv[]){
    stack s,s1;
    char line[100];
    int i=0,hold;
    printf("Enter The Arithmetic Expression : ");
    gets(line);
    while(line[i]!='\0'){
		if(line[i]>='0' && line[i]<='9') s.push(line[i]-48);
		else if(line[i]=='+' || line[i]=='-' || line[i]=='*' || line[i]=='/'){
			switch(line[i]){
				case '+':
				s.push(s.pop()+s.pop());
				break;
				case '-':
				s.push(s.pop()-s.pop());
				break;
				case '*':
				s.push(s.pop()*s.pop());
				break;
				case '/':
				hold = s.pop();
				s.push(s.pop()/hold);
				break;
			}
			
		}
		i++;
	}
	printf("%d",s.pop());
    return 0;
}
