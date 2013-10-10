#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 10

void gen_number(int amount)
{
    srand(time(NULL));
    FILE *f = fopen("in.txt","w");
    for(int i=0;i<amount;i++) fprintf(f,"%d\n",rand()%250);
    fclose(f);
}

void insertion_sorting(int numbers[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=numbers[i];
        for(j=i-1;j>=0 && numbers[j]>temp;j--) numbers[j+1]=numbers[j];
        numbers[j+1]=temp;
    }
}

int bin_search(int numbers[],int left,int key,int length)
{
    if(left>length) return -1;
    int mid = (left+length)/2;
    if(numbers[mid]==key) return mid;
    else if(numbers[mid]>key) return bin_search(numbers,left,key,mid-1);
    else if(numbers[mid]<key) return bin_search(numbers,mid+1,key,length);
}

int main()
{
    int b[MAX_NUMBER],i,key;
    gen_number(MAX_NUMBER);
    printf("Enter Your Search Number : ");
    scanf("%d",&key);
    freopen("in.txt","r",stdin);
    i=0;
    while(scanf("%d",&b[i++])!=EOF);
    insertion_sorting(b,i);
    int ans = bin_search(b,0,key,i-1);
    if(ans+1)
    printf("Data Found at position %d in sorted Array.",ans);
    else
    printf("Data not found");
    return 0;
}
