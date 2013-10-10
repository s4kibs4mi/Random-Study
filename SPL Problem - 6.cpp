-> Find whether a given string is palindrome or not. 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[100];
	gets(str);
	int i,n = strlen(str),flag = 1;
	for(i=0;i<=n;i++){
		if(str[i]!=str[n-i-1]){
			flag = 0;
			break;
		}
	}
	if(flag) printf("Palindrome");
	else printf("Not Paliddrome");
	return 0;
}
