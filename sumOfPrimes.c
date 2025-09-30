#include <stdio.h>

unsigned int isPrime(unsigned int num){
    if (num <= 1){
        return 0;
    }
    for (unsigned int i = 2; i < num; i++){
        if (num%i == 0){
            return 0;
        }
    }
    return num;
}
void sumOfPrimes(unsigned int num1 , unsigned int num2){
    unsigned int result = 0;
    for(unsigned int i = num1 ; i < num2; i++){
        result += isPrime(i);
    }
    printf("The sum of the prime numbers in the period between %d and %d is %d", num1, num2, result);
}
int main(){
    unsigned int number1, number2;
    printf("Put two numbers and I'll sum the prime numbers in their period(The first number have to be the less)");
    scanf("%d %d", &number1, &number2);
    sumOfPrimes(number1,number2);
    return 0;
}