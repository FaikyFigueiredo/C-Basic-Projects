#include <math.h>
#include <stdio.h>

int main(){
    float A,B,C,delta;
    printf("Insert the A, B and C of Bhaskara with space separing them:\n");
    scanf("%f %f %f" , &A , &B , &C);
    delta = (B*B) - (4 * A * C);
    float root1, root2;
    if (delta == 0){
        root1 = -B/2*A;
        printf("Just one root, the %.2f" , root1);
    }else if (delta > 0){
        root1 = (-B + sqrt(delta)) / 2*A;
        root2 = (-B - sqrt(delta)) / 2*A;
        printf("There's two roots, the %f and %f", root1, root2);
    }else{
        printf("There's just imaginary roots");
    }
    return 0;
}