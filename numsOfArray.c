#include <stdio.h>

void nums(int *arr, int *sum , int *bigger, int *less, int len){
	int result = 0, big = -1, les = 127;
	for (int i = 0;i<len;i++){
		result += arr[i];
		if (arr[i] < les){
			les = arr[i];
		}if (arr[i] > big){
			big = arr[i];
		}
	}
	*bigger = big;
	*less = les;
	*sum = result;
}
int main(){
	int length, sum, bigger, lesser;
	printf("Please, put the length of the array\n");
	scanf("%d" , &length);
	int numbers[length];
	for(int i = 0; i < length; i++){
		printf("Put the %d element", i+1);
		scanf("%d", &numbers[i]);
	}
	nums(numbers, &sum, &bigger, &lesser, length);
	printf("The lesser number is %d, the bigger number is %d, and the sum of numbers is %d\n", lesser, bigger, sum);
	return 0;
}
