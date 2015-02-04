#include <stdio.h>

int main(){
    int s,e,i;
    scanf("%d %d",&s,&e);
    for(;s <= e; s++){
        int imad = 1;
        for(i = 2; i <= s/2; i++){
            if(s%i == 0){
                imad = 0;
                break;
            }
        }
        if(imad == 1 && s > 1){
            printf("%d is prime\n", s);
        }
    }
    return 0;
}
