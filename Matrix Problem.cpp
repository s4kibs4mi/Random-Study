Input :
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

Output :
1 2 6 11 7 3 4 8 12 16 21 17 13 9 5 10 14 18 22 23 19 15 20 24 25

Solution :

#include<stdio.h>
#include<stdlib.h>
#define n 5
#define T n*n

int main(){
	FILE *f = fopen("file.txt","r");
	int i,j,k,mat[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			fscanf(f,"%d",&mat[i][j]);
	}
	j=0,k=0;
	for(i=1;i<=T;i++){
		if(mat[j][k]%2==0){
			printf("%d ",mat[j][k]);
			if(j>=n && k<=0){
				k++;
				j--;
			}
			else if(k>=n-1 && j<=0){
				k--;
			}
			else if(k<=0){
				j++;
			}
			else if(j>=n-1){
				k++;
			}
			else{
				j++;
				k--;
			}
		}
		else if(mat[j][k]!=0){
			printf("%d ",mat[j][k]);
			if(j>=n && k<=0){
				k--;
				j++;
			}
			else if(k>=n-1 && j<=0){
				j++;
			}
			else if(j<=0){
				k++;
			}
			else if(k>=n-1){
				j++;
			}
			else{
				j--;
				k++;
			}
		}
	}
	return 0;
}
