#include <stdio.h>

int defineRisk(weight){
    int risk;
    if (weight < 2){
        risk = 3;
    }else if (weight > 3){
        risk = 1;
    }else{
        risk = 2;
    }
    return risk;
}
int main(){
    int age;
    float weight;
    printf("Insert your age and your weight\n");
    scanf("%d %.2f", &age, &weight);
    weight /= 30;
    printf("Your risk level is equal to ");
    int add;
    if (age < 20){
        add = 6;
    }else if (age > 50){
        add = 0;
    }else{
        add = 3;
    }
    int risk = defineRisk(weight) + add;
    return 0;
}