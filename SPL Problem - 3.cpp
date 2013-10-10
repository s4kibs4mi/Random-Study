-> Given a string s, replace all the vowels with ‘0’ and replace all the consonants by ‘1’.

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char s[100];
	gets(s);
	int i;
	for(i=0;s[i]!='\0';i++){
		s[i] = tolower(s[i]);
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			s[i] = '0';
		else s[i] = '1';
	}
	puts(s);
	return 0;
}
