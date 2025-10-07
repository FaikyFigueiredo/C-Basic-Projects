#include <stdio.h>

int main(){
	int arr[10], *parr;
	parr = arr;
	printf("Put ten values to the array\n");
	for (int i = 0; i<10;i++){
		scanf("%d", parr);
		*(parr++) *= 2;
	}
	printf("The values of array are:\n");
	for (int i = 0; i<10 ; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
