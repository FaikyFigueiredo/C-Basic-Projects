#include <stdio.h>
#include <time.h>

int main(){
    int VN[30];
    int bigger = -1;
    srand(time(0));
    printf("The elements list is:\n");
    for ( int i = 0 ; i < 30 ; i++ ){
        VN[i] = rand();
        printf("%d " , VN[i]);
        if ( VN[i] > bigger ){
            bigger = VN[i];
        }
    }
    printf("The biggest number is: %d" , bigger);
    return 0;
}