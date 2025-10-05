#include <stdio.h>
#include <math.h>

double deviation(double *a , int len){
    double result, sum = 0 , average = 0;
    for(int i = 0; i<len ; i++){
        average+=a[i];
    }
    average /= (double)len;
    for (int i = 0; i<len;i++){
        sum += (a[i] - average) * (a[i] - average);
    }
    result = sqrt((double)1/(len-1) * sum);
    return result;
}
int main(){
    int length;
    printf("How many number do you'll put?\n");
    scanf("%d", &length);
    double array[length];
    for (int i = 0; i < length; i++){
        printf("Put the %d° value\n", i+1);
        scanf("%lf", &array[i]);
    }
    printf("The standard deviation is %lf\n", deviation(array,length));
    return 0;
}