-> Replace all the digits in a string by the next digit. For example, replace 0 by 1, replace 1 by 2 etc. 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[1000];
	gets(str);
	int i;
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='0' && str[i]<='9'){
			if(str[i]=='9') str[i] = '0';
			else str[i] = str[i]+1;
		}
	}
	puts(str);
	return 0;
}
