#include <stdio.h>

int factorial(int num){
    int result = 1;
    for (int i = num; i > 1; i--){
        result *= i;
    }
    return result;
}
int main(){
    int array[10], factorials[10];
    printf("Put ten numbers bigger than 0 to calculate the factorial\n");
    for(int i = 0; i < 10; i++){
        scanf("%d" , &array[i]);
        factorials[i] = factorial(array[i]);
    }
    for (int i = 0; i < 10; i++){
        printf("The number %d has %d as factorial\n", array[i], factorials[i]);
    }
    return 0;
}