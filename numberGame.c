#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int searchInArray(int numbers[8], int number){
    int postion = -1;
    for(int i = 0; i < 8; i++){
        if (number == numbers[i]){
            postion = i;
        }
    }
    return postion;
}

int main(){
    srand((int)time(NULL));
    int array[8] , result , num;
    for (int i =0; i<8; i++){
        array[i] = rand()%10;
    }
    printf("Put a number (0 to 9) to verify if it's in the list");
    while(1){
        scanf("%d" , &num);
        result = searchInArray(array , num);
        if (result >=0){
            printf("Your number, %d, is on the position %d in array", num , result);
            return 0;
        }else{
            printf("Your number isn't in array, please try again");
            continue;
        }
    }
    return 0;
}