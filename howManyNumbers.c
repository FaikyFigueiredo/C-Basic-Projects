#include <stdio.h>

int numberOfNumbers(char phrase[]){
    int result = 0;
    for (int i = 0 ; phrase[i] != '\0' ; i++){
        if (phrase[i] == '0' || phrase[i] == '1' || phrase[i] == '2' || phrase[i] == '3' || phrase[i] == '4' || phrase[i] == '5' || phrase[i] == '6' || phrase[i] == '7' || phrase[i] == '8' || phrase[i] == '9'){
            result += 1;
        }
    }
    return result;
}
int main(){
    char word[30];
    printf("Put a phrase and I'll verify if that have some numbers\n");
    scanf("%s" , word);
    int result = numberOfNumbers(word);
    printf("There are %d numbers on this phrase/word\n" , result);
    return 0;
}