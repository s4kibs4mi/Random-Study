#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    scanf("%d",&i);
    char res[9]; // 8 bit binary representation
    int index = 7;
    while(i > 0){
        res[index--] = (i%2) + 48;
        i /= 2;
    }
    while(index >= 0){
        res[index--] = '0';
    }
    res[8] = '\0';
    printf("%s",res);
    return 0;
}
