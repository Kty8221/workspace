#include <stdio.h>

// 짝수합, 홀수 합 계산하기

int main(){
    int evenSum = 0;  // 짝수합
    int oddSum = 0;  // 홀수합

    for(int i = 1; i<=100; i++){
        // 홀짝 판별 조건식
        if(i % 2 == 0) {
            evenSum += i;  // 짝수
        }
        else {
            oddSum += i;  // 홀수
        }
    }

    printf("짝수합 : %d, 홀수합 : %d\n", evenSum, oddSum);
    
}
