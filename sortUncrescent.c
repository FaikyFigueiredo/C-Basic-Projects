#include <stdio.h>

int main(){
    printf("Insert three values and i will sort for you\n");
    int value1, value2, value3;
    int *bigger, *median , *smaller;
    scanf("%d %d %d" , &value1, &value2, &value3);
    if (value1 > value2){
        *bigger = value1;
        *smaller = value2;
    }else{
        *bigger = value2;
        *smaller = value1;
    }if (*bigger < value3){
        *median = *bigger;
        *bigger = value3;
    }else if(*smaller > value3){
        *median = *smaller;
        *smaller = value3;
    }
    printf("%d , %d , %d", *bigger, *median, *smaller);
    return 0;
}