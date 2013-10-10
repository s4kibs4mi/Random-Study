//@Random password generator

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int a,b,i,j,chk,check[8],flag;
	char genp[8],pass[8];
	printf("How many characters do u want to take from A-Z :");
	scanf("%d",&a);
	printf("How many characters do u want to take from a-z :");
	scanf("%d",&b);
	printf("Then You want to take %d number(s) from 0-9",8-(a+b));
	printf("\n");
	for(i=0;i<a;i++)
	{
		genp[i]=65+rand()%26;
	}
	for(;i<a+b;i++)
	{
		genp[i]=97+rand()%26;
	}
	for(;i<8;i++)
	{
		genp[i]=48+rand()%10;
	}
	int loc=0;
	for(i=0;i<8;i++)
	{
		again:
		chk=rand()%8;
		for(j=0;j<loc;j++)
		{
			if(chk==check[j])
				goto again;
		}
		pass[chk]=genp[i];
		check[loc]=chk;
		loc++;
	}
	pass[i]='\0';
	puts(pass);
	return 0;
}
