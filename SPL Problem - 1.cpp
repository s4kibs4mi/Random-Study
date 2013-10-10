-> Find the count of vowels in given string. Also print the index.

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char str[100];
	gets(str);
	int i,count = 0;
	for(i=0;str[i]!='\0';i++){
		str[i] = tolower(str[i]);
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			count++;
			printf("str[%d] ",i);
		}
	}
	printf("\nNumber of vowel : %d",count);
	return 0;
}
