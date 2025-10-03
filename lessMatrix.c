#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setMatrix(int length ,int matrix[length][length]){
    srand((int)time(NULL));
    for (int i = 0; i < length; i++){
        for (int j = 0; j<length;j++){
            matrix[i][j] = rand()%41;
        }
    }
}
void lessOfMatrix (int m, int n, int mat[m][n], int *less, int *i , int *j){
    for (int k = 0; k < m ; k++){
        if (mat[k][k] > *less){
            *less = mat[k][k];
            *i = k;
            *j = k;
        }
    }
}
int main(){
    int less = -1, i , j , length;
    printf("Put the length of the matrix\n");
    scanf("%d", &length);
    int matrix[length][length];
    setMatrix(length , matrix);
    lessOfMatrix(length , length, matrix, &less, &i, &j);
    printf("The less value is %d, it's on the line %d and the colun %d\nThis is the matrix:\n" , less, i , j);
    return 0;
}