#include <stdio.h>

// while문으로 구구단 2단 출력

int main(){

    // for문의 구구단 2단 출력 코드
    for(int i = 1; i <= 9; i++) {
        printf("2 * %d = %d\n", i, 2*i);
    }

    // while문의 구구단 2단 출력 코드
    int j = 1;  // 초기식
    while(j <= 9) {  // while(조건식) → 조건식에 for문의 제어식을 넣어주면 된다.
        prinf("2 * %d = %d\n", j, 2*j);
        j += 1;  // 증감식
    }
}