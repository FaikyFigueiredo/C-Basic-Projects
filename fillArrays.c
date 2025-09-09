#include <stdio.h>

int main(){
    int P[10];
    int V[10];
    int S[10];
    for ( int value = 2, i = 0 ; value <= 20 ; value+=2 , i++ ){
        P[i] = value;
    }for ( int value = 10 , i = 0; value <= 19 ; value++, i++ ){
        V[i] = value;
    }for ( int i = 0 ; i < 10 ; i++ ){
        S[i] = V[i] + P[i];
        printf("Value of P%d is: %d\n" , i + 1 , P[i]);
        printf("Value of V%d is: %d\n" , i + 1 , V[i]);
        printf("Value of S%d , the sum of P and V, is: %d\n" , i + 1 , S[i]);
    }
    return 0;
}