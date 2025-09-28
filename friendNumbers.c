#include <stdio.h>

int sumOfDivisors(int num){
    int result = 1;
    for(int i=num-1; i >1; i--){
        if (num%i==0){
            result += i;
        }
    }
    return result;
}
int main(){
    int number1, number2;
    printf("Put two numbers and I'll say if these numbers are friends or not\n");
    scanf("%d", &number1);
    scanf("%d" , &number2);
    if (number1 == sumOfDivisors(number2) && number2 == sumOfDivisors(number1)){
        printf("They are friends\n");
    }else{
        printf("They aren't friends\n");
    }
    return 0;
}