#include<stdio.h>
#include<stdlib.h>
#define N 3
int main(){
	int a[N][N],b[N][N],c[N][N],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value of A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			printf("Enter value of B[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
		
	}
	printf("Matrix A :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix B :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Matrix C = A-B :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j] = a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
