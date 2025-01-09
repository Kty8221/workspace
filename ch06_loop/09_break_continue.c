#include <stdio.h>

/**
 * Break : 즉시 반복문을 빠져 나가기
 * Continue : 즉시 다음 반복으로 넘어가기 → 코드실행x 무조건 반복문으로
 *  */ 

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            continue;
        }

        if(i == 5) {
            break;
        }
        printf("%d\n", i);
    }
}