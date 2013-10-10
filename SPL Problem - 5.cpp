-> Given 4 strings A, B, C and D, print output as following: 
If A and B are equal, print A=B 
If B and C are equal, print B=C 
If C and D are equal, print C=D 
If A and D are equal, print A=D 
If A, B and C are equal, print A=B=C 
If B, C and D are equal, print B=C=D 
If A, B, C and D are equal, print A=B=C=D (hint: use strcmp to compare two strings) 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char a[100],b[100],c[100],d[100];
	printf("Enter A : ");
	gets(a);
	printf("Enter B : ");
	gets(b);
	printf("Enter C : ");
	gets(c);
	printf("Enter D : ");
	gets(d);
	if(strcmp(a,b)==0 && strcmp(b,c)==0 && strcmp(c,d)==0) printf("A=B=C=D\n");
	if(strcmp(a,b)==0 && strcmp(b,c)==0) printf("A=B=C\n");
	if(strcmp(b,c)==0 && strcmp(c,d)==0) printf("B=C=D\n");
	if(strcmp(a,b)==0) printf("A=B\n");
	if(strcmp(b,c)==0) printf("B=C\n");
	if(strcmp(c,d)==0) printf("C=D\n");
	if(strcmp(a,d)==0) printf("A=D\n");
	return 0;
}
