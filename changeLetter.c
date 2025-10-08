#include <stdio.h>
#include <string.h>

void tradeLetter(char *str, char toTrade , char theTrade){
	int index = 0;
	while(str[index] != '\0'){
		if (str[index] == toTrade){
			str[index] = theTrade;
		}
		index++;
	}
}
int main(){
	char str[100], off = '\0', in = '\0';
	printf("Put a word and after say which letter i have to trade to what");
	fgets(str,100,stdin);
	printf("Now the letter to trade");
	while(off == '\0'|| off == '\n')
		scanf("%c", &off);
	printf("And, finally, the letter to replace");
	while(in == '\0'|| in == '\n')
		scanf("%c", &in);
	tradeLetter(str, off, in);
	printf("Your phrase now is: %s", str);
	return 0;
}
