// Substring finding

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char string[50];
	char sub_string[15];
	printf("Enter string :");
	gets(string);
	printf("Enter sub-string :");
	gets(sub_string);
	int length=strlen(string); // finout the length of string
	int length_sub=strlen(sub_string); // finout the length of sub_string
	int c,j,i=0,flag=0,pos;
	while(i<=length-length_sub) // this loop will execute will the value of i is less thn (string length-substring length)
	{
		c=0;
		j=0;
		while(j<length_sub)
		{
			if(string[i+j]==sub_string[j]) // comparing string with sub string
			{
				c++; // if character of string matches with sub-string thn counting
				j++;
			}
			else // if character of string doesn't match with sub-string thn breaking
			{
				break;
			}
		}
		if(c==length_sub) // by this checking whether sub string length and count value same or not
		{
			flag=1; // if substring and count value same thn it means sub string found
			pos=i; // collecting the position on sub-string
			break;
		}
		i++;
	}
	if(flag==0)
	printf("Sub string Not Found");
	else printf("Sub string Found at %d",pos+1);
	return 0;
}
