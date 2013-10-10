#include <stdio.h>
#include <stdlib.h>

int main()
{
    char in[100];
    int i;
    gets(in);
    for(i=0;in[i]!='\0';i++)
    {
        if(in[i]>=65 && in[i]<=65+25)
        printf("%c",('Z'-in[i])+'A');
        else
        printf("%c",('z'-in[i])+'a');
    }
return 0;
}
