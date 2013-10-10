-> Find whether a given string is a binary number (Hint: a binary number contains only 0 and 1) 

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char s[100];
	gets(s);
	int i,flag = 1;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!='0' && s[i]!='1'){
			flag = 0;
			break;
		}
	}
	if(flag) printf("Binary");
	else printf("Not Binary");
	return 0;
}
