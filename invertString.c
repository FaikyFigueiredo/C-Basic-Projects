#include <stdio.h>
#include <string.h>

void inversor(char *normal, char *inverted){
	int length = 0;
	for (int i = 0; normal[i] != '\0'; i++)
		length++;
	for (int i = 0, j = length - 1; i < length ; j--, i++)
		inverted[j] = normal[i];
	inverted[length] = '\0';
}
int main(){
	char str[100], inv[100];
	printf("Put a string and I'll invert it\n");
	fgets(str, 100, stdin);
	inversor(str,inv);
	printf("This is your string inverted %s\n", inv);
	return 0;
}
