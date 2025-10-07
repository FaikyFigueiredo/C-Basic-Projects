#include <stdio.h>

int verifyColuns(int len , int arr[len][len]){
	int sum = -1,tempSum = 0;
	for (int j = 0; j < len ; j++){
		for (int i = 0 ; i < len ; i++){
			tempSum += arr[i][j];
		}if (sum == -1){
			sum = tempSum;
		}else if (sum != tempSum){
			return -1;
		}
		tempSum = 0;
	}
	return sum;
}
int verifyLines(int len, int arr[len][len]){
	int tempSum = 0, sum = -1;
	for (int i = 0; i < len ; i++){
		for (int j = 0; j < len ; j++){
			tempSum += arr[i][j];
		}if (sum == -1){
			sum = tempSum;
		}else if (sum != tempSum){
			return -1;
		}
		tempSum = 0;
	}
	return sum;
}
int verifyDiagonals(int len, int arr[len][len]){
	int sum = 0 , tempSum = 0;
	for(int i = 0, j = 0; i < len ; i++, j++){
		tempSum+=arr[i][j];
	}for (int i = len-1, j = 0 ; j < len; j++, i--){
		sum += arr[i][j];
	}if (sum == tempSum){
		return sum;
	}else{
		return -1;
	}

}
void isMagic(int len, int arr[len][len]){
	int coluns, lines, diagonals;
	coluns = verifyColuns(len , arr);
	lines = verifyLines(len , arr);
	diagonals = verifyDiagonals(len , arr);
	if (coluns == lines && coluns == diagonals && coluns != -1){
		printf("The square matrix of length %d is magic!!!\n", len);
	}else{
		printf("The square matrix of length %d isn't magic ;-;\n", len);
	}
}
int main(){
	int len;
	printf("Put the length of the square matrix\n");
	scanf("%d", &len);
	int matrix[len][len];
	for (int i = 0 ; i < len; i++){
		for (int j = 0 ; j < len ; j++){
			printf("Put the value of line %d and colun %d\n", i + 1, j + 1);
			scanf("%d" , &matrix[i][j]);
		}
	}
	isMagic(len, matrix);
	return 0;
}
