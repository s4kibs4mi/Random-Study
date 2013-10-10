#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y) {
	int hold = *x;
	*x = *y;
	*y = hold;
}

void selection_sort(int a[],int n) {
	int i,j,max;
	for(i=0;i<n;i++) {
		max = i;
		for(j=i+1;j<n;j++) {
			if(a[j]<a[max])
				max = j;
		}
		swap(&a[i],&a[max]);
	}
}

int main() {
	int a[10],i;
	for(i=0;i<10;i++) scanf("%d",&a[i]);
	selection_sort(a,10);
	for(i=0;i<10;i++) printf("%d\t",a[i]);
	return 0;
}
