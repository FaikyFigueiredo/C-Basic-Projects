#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cryptografation(char* str, int key){
	for (int i = 0; str[i] != '\n' && str[i] != '\0' ; i++){
		if (str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += key;
			if (str[i] > 'Z')
				str[i] -= 26;
			else if (str[i] < 'A')
				str[i] += 26;
		}else if (str[i] >= 'a' && str[i] <= 'z'){
			if(str[i] + key <= 'z' && key > 0)
				str[i] += key;
			else if (key > 0)
				str[i] += key - 26;
			if (str[i] + key >= 'a' && key < 0)
				str[i] += key;
			else if (key < 0)
				str[i] += key + 26;
		}
	}
}
void menu(){
	printf("What you wanna do?\n");
	printf("1-Cryptografe a message\n");
	printf("2-Uncryptografe a message\n");
	printf("3-Exit and take a shower\n");
}
int main(){
	int opt;
	while (1){
		char str[100];
		menu();
		scanf("%d", &opt);
		getchar();
		switch (opt){
			case 1:
				printf("Put your phrase to cryptografe\n");
				fgets(str, 100, stdin);
				srand(time(NULL));
				int* key = malloc(sizeof(int));
				*key = rand()%25 + 1;
				cryptografation(str, *key);
				printf("Your new string is %sAnd your key is %d\n", str, *key);
				free(key);
				break;
			case 2:
				int *keyUn = malloc(sizeof(int));
				printf("Put the phrase cryptografed\n");
				fgets(str, 100, stdin);
				printf("Now, put the key to uncryptografe\n");
				scanf("%d", keyUn);
				getchar();
				*keyUn *= -1;
				cryptografation(str, *keyUn);
				printf("Your phrase no cryptografed is %s\n", str);
				free(keyUn);
				break;
			case 3:
				return 0;
		}
	}
}
