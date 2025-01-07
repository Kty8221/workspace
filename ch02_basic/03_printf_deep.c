#include <stdio.h>
// 지수 표현법
// - x10을 e로 표현
// - 0.0000314 = 3.14e-5, 

int main(){
    // 182cm → 1.82m
    // printf + format
    printf("%.1lf\n", 1e6); // 1 * 10^6의 값 = 1000000.0
    printf("%.7lf\n", 3.14e-5); // 3.14 * 10^-5 값 = 0.0000314
    printf("%le\n", 0.0000314); // 지수표현 바꿈
}