#include <stdio.h>

// 1~100까지 더하기

int main() {
    int total = 0;  // 덧셈결과를 저장할 변수

    for(int i = 1; i <= 100; i++) {
        total += i;  // total = total + i

        //  누적합이 30보다 크면 반복을 중단하고 싶을때..
        if(total > 30) {
            break;
        }
    }

    printf("1~100까지 합은 %d", total);
}