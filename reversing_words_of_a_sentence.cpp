#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char sen[500],sen1[500],temp[100];
	int i,j = 0,k = 0;
	gets(sen);
	i = strlen(sen) - 1;
	while(i >= 0){ // Main loop for getting characters from sentence
		if(sen[i]==' '){
			j--;
			while(j >= 0){ // adding taken word to output line
				sen1[k] = temp[j];
				k++;
				j--;
			}
			sen1[k++] = ' ';
			j = 0;
		}
		else{ // Taking words from the sentence
			temp[j] = sen[i];
			j++;
		}
		i--;
	}
	j--;
	while(j >= 0){ // last word adding as it is not added in main loop
		sen1[k] = temp[j];
		k++;
		j--;
	}
	sen1[k] = '\0'; // add NULL character to output line
	puts(sen1); // printing output
	return 0;
}
