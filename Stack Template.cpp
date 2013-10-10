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
    printf("Stack Ready !!!");
    return 0;
}
