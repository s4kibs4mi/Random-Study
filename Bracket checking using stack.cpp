#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

struct stack
{
  private: int head; char A[SIZE];
  public: stack()
          {
              head=0;
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
    stack s;
    FILE *f = fopen("file.txt","r");
    char c;
    int flag = 0;
    while(c!=EOF && flag!=3){
        c = fgetc(f);
        if(c=='(' || c=='{' || c=='[') s.push(c);
        else if(s.is_empty() && (c=='}' || c==')' || c==']')) flag = 1;
        else{
            char temp = s.pop();
            switch(c){
            case ')':
                if(temp=='(') flag = 2;
                else flag = 3;
                break;
            case '}':
                if(temp=='{') flag = 2;
                else flag = 3;
                break;
            case ']':
                if(temp=='[') flag = 2;
                else flag = 3;
                break;
            }
        }
    }
    if(s.is_empty()) flag = 4;
    switch(flag){
    case 1:
        printf("Closing Bracket Over Flow.\n");
        break;
    case 2:
        printf("Balanced.\n");
        break;
    case 3:
        printf("Unmatched.\n");
        break;
    case 4:
        printf("Opening Bracket Over Flow.\n");
        break;
    }
    return 0;
}
