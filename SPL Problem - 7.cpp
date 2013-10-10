-> Find the length of a string. If the string is more than 100 characters long, print “Long string” 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[1000];
	gets(str);
	int n = strlen(str);
	printf("String Length : %d\n",n);
	if(n>100) printf("Long String.");
	return 0;
}
