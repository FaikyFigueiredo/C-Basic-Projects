#include <stdio.h>

void removeChar(char *str, int position){
    int removed = 0;
    for (int i = 0; str[i] != '\0' || i <31; i++){
        if (removed == 1){
            str[i] = str[i+1];
        }else if(i == position){
            removed = 1;
            str[i] = str[i + 1];
        }
    }
}
int main(){
    char string[31];
    int pos;
    printf("Put some word and after i will remove some letter in some position(max of 30 letters)\n");
    scanf("%s", string);
    printf("Now, put the position to remove\n");
    scanf("%d" , &pos);
    removeChar(string, pos - 1);
    printf("There's your new word:%s\n", string);
    return 0;
}