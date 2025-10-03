#include <stdio.h>

int isPrime(int number){
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number%i == 0){
            count++;
        }
    }
    if (count == 2){
        return 1;
    }
    return 0;
}
int main(){
    int number = 0,result;
    printf("Put a number and I'll say if it's a prime number or not\n");
    scanf("%d", &number);
    result = isPrime(number);
    if (result == 0){
        printf("The number %d isn't a prime number\n", number);
    }else{
        printf("The number %d is a prime number\n",number);
    }
}