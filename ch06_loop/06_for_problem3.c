#include <stdio.h>

// 별찍기
// 별을 이용한 직각삼각형or 도형 만들기

int main() {
    for(int i = 0; i <= 5; i++) {  // 5번 반복
        for(int j = 1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }


    printf("############################################\n");
    // 역 직각삼각형 출력하기(거꾸로 뒤집어져 있는 삼각형)
    for(int i = 5; i >= 1; i--) {  // 5번 반복
        for(int j = 1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
