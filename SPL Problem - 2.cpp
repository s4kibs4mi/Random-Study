-> Find count of digits in given string. Also print the index. 

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char str[100];
	gets(str);
	int i,count = 0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='0' && str[i]<='9'){
			count++;
			printf("str[%d] ",i);
		}
	}
	printf("\nNumber of digit : %d",count);
	return 0;
}
