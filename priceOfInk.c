#include <stdio.h>

int main(){
    printf("Welcome to the ink store\nType the m² that you want to pint\n");
    float meters;
    scanf("%f", &meters);
    float liters = (int)meters/3;
    if ((float)meters/3 - (int)meters/3 != 0){
        liters += 1;
    }
    int cans = (int)liters/18;
    if (liters/18 - (int)liters/18 != 0){
        cans += 1;
    }
    float price = (float)cans * 80;
    printf("You'll need R$%.2f to buy %d" ,price , cans);
    return 0;
}