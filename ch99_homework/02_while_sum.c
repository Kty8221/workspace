#include <stdio.h>

// 문제 : while문을 사용해서 1~100까지의 값을 사용해서
//        홀수합, 짝수합 계산

int main() {
    int num = 1;
    int evenNum;  // 짝수 합 저장할 변수
    int oddNum;  // 홀수 합 저장할 변수

    while(num <= 100) {
        if(num % 2 == 0) {
            evenNum += num;
        }
        else {
            oddNum += num;
        }

        num++;
    }

    printf("짝수의 합은 %d입니다.\n", evenNum);
    printf("홀수의 합은 %d입니다.\n", oddNum);
    

}