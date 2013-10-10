-> Count words, spaces and sentences in a given string. 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[1000];
	gets(str);
	int i,space = 0,dot = 0,sentence = 0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' ')
			space++;
		else if(str[i]=='.'){
			sentence++;
			dot++;
		}
	}
	if(str[i-1]=='.') printf("Word(s) : %d\nSpace(s) : %d\nSentence(s) : %d\n",space+dot,space,sentence);
	else if(str[i-1]!='.') printf("Word(s) : %d\nSpace(s) : %d\nSentence(s) : %d\n",space+dot+1,space,sentence+1);
	return 0;
}
