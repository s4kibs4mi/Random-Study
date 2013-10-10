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
    int i,n;
    scanf("%d",&n);
    for(i=n;i>0;i--) s.push(i);
    int length = n;
    printf("Discarded cards : ");
    while(length>=2){
        printf("%d,",s.pop());
        int m = s.pop();
        for(i=0;i<length-2;i++) s1.push(s.pop());
        s.push(m);
        for(i=1;i<length+1-2;i++) s.push(s1.pop());
        length--;
    }
    printf("\nRemaining card : %d",s.pop());
    return 0;
}
