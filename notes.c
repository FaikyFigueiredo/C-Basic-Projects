#include <stdio.h>

void sumOdd(int *nums , int len){
    int total = 0, count = 0;
    for (int i = 0; i<len ; i++){
        if (nums[i]%2 == 1){
            total += nums[i];
            count++;
        }
    }
    if (count == 0){
        printf("There's no odd notes\n");
    }else{
        total = (int)(total/count);
        printf("The average of odd notes is %d\n" , total);
    }
}
void sumEven(int *nums , int len){
    int total = 0, count = 0;
    for (int i = 0; i<len ; i++){
        if (nums[i]%2 == 0){
            total += nums[i];
            count++;
        }
    }if (count == 0){
        printf("There's no notes even\n");
    }else{
        total = (int)(total/count);
        printf("The average of even notes is %d\n" , total);
    }
}
void belowSeventy(int *nums , int len){
    int count = 0;
    for (int i = 0; i<len ; i++){
        if (nums[i] < 70){
            count++;
        }
    }
    printf("There are %d students that's below 70\n" , count);
}
void belowMedia(int *nums , int len){
    int total = 0, count = 0;
    for (int i = 0; i<len ; i++){
        total += nums[i];
    }
    total = (int)total/len;// We don't need broke numbers
    for (int i = 0; i<len ; i++){
        if (nums[i] < total){
            count++;
        }
    }
    printf("There are %d students that's below the average\n" , count);
}
int main(){
    int length;
    printf("Put the length of the array\n");
    scanf( "%d", &length);
    int notes[length];
    for (int i = 0; i<length ; i++){
        printf("Put the %d° note\n" , i + 1);
        scanf("%d",&notes[i]);
    }
    sumEven(notes,length);
    sumOdd(notes,length);
    belowMedia(notes, length);
    belowSeventy(notes,length);
    return 0;
}