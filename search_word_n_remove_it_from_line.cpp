// Searching a word in a sentence and removing it

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char sen[500],word[100];
	gets(sen);
	gets(word);
	
	int len = strlen(sen),wLen = strlen(word),i,j,n;
	
	// Searching word starts here
	i = 0;
	while(i <= len-wLen){
		j = 0;
		while(word[j]){
			if(word[j] != sen[i+j])
				break;
			j++;
		}
		if(j==wLen)
			break;
		i++;
	}
	if(i==len-wLen+1)
		i = -1; // i = -1 means word not found
	// Searching word ends here
	
	printf("Found at index : %d \n",i);
	// Removing Word from sentence starts
	
	n = 0;
	while(n < wLen){
		j = i;
		for(; sen[j] ; j++){
			sen[j] = sen[j+1];
		}
		n++;
	}
	if(sen[i]==' '){ // This if is for removing extra space
		j = i;
		for(; sen[j] ; j++){
			sen[j] = sen[j+1];
		}
	}
	// Removing Word from sentence ends
	puts(sen);
	return 0;
}
