#include <stdio.h>
#include <time.h>

int searchInArray(int numbers[8], int number){
    int postion = -1;
    for(int i = 0; i < 8; i++){
        if (number == numbers){
            postion = i;
        }
    }
    return postion;
}
int main(){
    randseed(time);
    int array[8] , result , num;
    for (int i =0; i<8; i++){
        array[i] = rand();
    }
    print("Put a number to verify if it's in the list");
    while(1){
        scanf("%d" , &num);
        result = searchInArray(array , num);
        if (result >=0){
            printf("Your number, %d, is on the position %d in array", num , result);
            return 0;
        }else{
            print("Your number isn't in array, please try again");
            continue;
        }
    }
    return 0;
}