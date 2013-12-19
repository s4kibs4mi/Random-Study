#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int StringSearch(char sen[],char word[]){
	int len = strlen(sen),wLen = strlen(word),i,j;
	i = 0;
	while(i <= len-wLen){
		j = 0;
		while(word[j]){
			if(word[j] != sen[i+j])
				break;
			j++;
		}
		if(j==wLen)
			return i;
		i++;
	}
	return -1;
}

void StringRemove(char sen[],int i,int len, int x){
	int j = x;
	if(i < len){
		for(; sen[j] ; j++){
			sen[j] = sen[j+1];
		}
		return StringRemove(sen,++i,len,x);
	}
	if(sen[j]==' ')
		return StringRemove(sen,++i,len,x);
}

int main(){
	char sen[500],word[100],n;
	gets(sen);
	gets(word);
	
	printf("Found at index : %d \n",n = StringSearch(sen,word));
	StringRemove(sen,0,strlen(word),n);
	puts(sen);
	return 0;
}
