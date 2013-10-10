-> Implement a library function that will concatenate two strings with a space in the middle. 


#include<stdio.h>
#include<stdlib.h>

int string_len(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

void string_concat(char str[],char str1[]){
	int i,n = string_len(str);
	str[n] = ' ';
	for(i=0;str[i]!='\0';i++)
		str[n+i+1] = str1[i];
	str[n+i] = '\0';
}

int main(){
	char str[1000],str1[500];
	printf("Enter 1st string : ");
	gets(str);
	printf("Enter 2nd string : ");
	gets(str1);
	string_concat(str,str1);
	printf("Concated String :\n");
	puts(str);
	return 0;
}
