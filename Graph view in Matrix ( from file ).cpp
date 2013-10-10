+++++++++++++++++++++++++++++
file.txt (contains)
5
1 2 5
2 1 3 4 5
3 2 4
4 2 3 5
5 1 2 4
+++++++++++++++++++++++++++++


#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	char c,x;
	FILE *f = fopen("file.txt","r");
	fscanf(f,"%d",&n);
	int a[n][n],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j] = 0;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	while(c!=EOF){
		c = getc(f);
		if(c=='\n'){
			x = getc(f);
		}
		else if(c>='0' && c<='9'){
			a[x-48-1][c-48-1] = 1;
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
