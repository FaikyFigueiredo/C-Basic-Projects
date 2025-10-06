#include <stdio.h>

int getBigger(char nums[3]){
    int result = 0;
    for (int i=0 ; i<3 ; i++){
        if (nums[i] - '0' > result){
            result = nums[i] - '0';
        }
    }
    return result;
}
int sumBiggers(char nums1[3], char nums2[3], char nums3[3]){
    int result = 0; 
    result += getBigger(nums1) + getBigger(nums2) + getBigger(nums3);
    return result;
}
int main(){
    char CPF[14] , firstNums[3] , secondNums[3], thirdNums[3], result;
    int expectedResult;
    while(1){
        printf("Put your CPF (brazzilian code to know who is the person) and I will verify if it's a valid CPF");
        scanf("%s" , CPF);
        if(CPF[0] == 'F'){
            break;
        }
        firstNums[0] = CPF[0];
        firstNums[1] = CPF[1];
        firstNums[2] = CPF[2];
        secondNums[0] = CPF[4];
        secondNums[1] = CPF[5];
        secondNums[2] = CPF[6];
        thirdNums[0] = CPF[8];
        thirdNums[1] = CPF[9];
        thirdNums[2] = CPF[10];
        result = CPF[12];
        expectedResult = sumBiggers(firstNums , secondNums , thirdNums)%10;
        if (result - '0' == expectedResult){
            printf("The digit %c is valid for this CPF" , result);
        }else{
            printf("The digit %c is invalid for this CPF, the valid digit is %d" , result, expectedResult);
        }
    }
    return 0;
}