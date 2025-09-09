#include <stdio.h>
#include <string.h>

#define LENGTH 11
int main(){
    char strA[LENGTH];
    char strB[LENGTH];
    printf("Insert your word/phrase with ten characters\n");
    fgets(strA , LENGTH , stdin);
    for (int i = 0; i < LENGTH;i++){
        int index = LENGTH - 2 - i;
        if (index < 0){
            strB[LENGTH - 1] = '\0';
            break;
        }
        char temp = strA[index];
        strB[i] = temp;
    }
    printf("%s\n",strA);
    printf("%s",strB);
    return 0;
}