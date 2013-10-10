#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int testCase,input,numbers[100000];

int main()
{
    int i;
    while(scanf("%d",&testCase)!=EOF)
    {
        for(i=0;i<100000;i++) numbers[i]=0;
        for(i=0;i<testCase;i++)
        {
            scanf("%d",&input);
            numbers[input]++;
        }
        int maxim=-1;
        int maximIndex;
        for(i=0;i<100000;i++)
        {
            if(maxim<numbers[i])
            {
                maxim=numbers[i];
                maximIndex=i;
            }
        }
        printf("%d\n",maximIndex);
    }
    return 0;
}
