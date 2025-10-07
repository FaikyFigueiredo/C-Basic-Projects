#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeChar(char *str, int position){
    int removed = 0;
    for (int i = 0; str[i] != '\0' || i <101; i++){
        if (removed == 1){
            str[i] = str[i+1];
        }else if(i == position){
            removed = 1;
            str[i] = str[i + 1];
        }
    }
}
int main(){
    char string[101];
    int pos;
    printf("Put some phrase and after i will remove some letter in some position(max of 100 letters)\n");
    fgets(string , 101 , stdin);
    printf("Now, put the position to remove\n");
    scanf("%d" , &pos);
    removeChar(string, pos - 1);
    printf("There's your new word:%s\n", string);
    return 0;
}