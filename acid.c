#include <stdio.h>

int main(){
    float acid;
    printf("Insert the index of acid\n");
    scanf("%f" , &acid);
    if (acid == 7){
        printf("Neutral");
    }else if(acid > 7){
        printf("Basic");
    }else{
        printf("Acid");
    }
    return 0;
}