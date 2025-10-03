#include <stdio.h>

int main(){
    float cash , change , price , total = 0;
    printf("Welcome to Tabajara's store");
    for (int i = 1 ; ;){
        printf("\nProduct %d: " , i);
        scanf("%f" , &price);
        if (price == 0){
            break;
        }
        total = total + price;
        i++;
    }
    printf("\nTotal: $%.2f" , total);
    printf("\nCash: $");
    scanf("%f" , &cash);
    change = cash - total;
    printf("Your change is: $%.2f" , change);
    return 0;
}