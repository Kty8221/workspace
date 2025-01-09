#include <stdio.h>

/**
 * 피보나치 수열 코드 개발
 *  - 피보나치 수열이란, 첫째 및 둘째 항이 1이며
 *     그 뒤에 모든 항은 바로 앞 두 항의 합인 수열
 *  ex) 1 1 2 3 5 8 13 ...
 */

int main() {
    int a = 1, b = 1;
    int sum = 0;  // 피보나치 수열의 합을 저장해놓을 변수
    int n;  // 사용자로부터 몇번째 항까지 더할것인지 입력받는 변수

    printf("숫자를 입력 : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){ // 첫째 항부터 n번째 항까지 반복
        printf("%d ", a);
        sum = a + b;  // 첫째항과 둘째항을 더한 값을 sum에 저장
        a = b;        // 둘째항을 첫째항 변수에 넣어놓기
        b = sum;     // 더한 값의 결과인 sum을 둘째항 변수에 넣어놓기
    }

    /* 교수님 풀이 → while문을 이용 / 문제 팁 → "반복패턴을 빨리 파악하기"
        int a = 1, int b = 1, fib;
        printf("%d %d ", a, b);

        while(1) {  → while(1)값은 항상 참이므로, 무한 반복을 의미한다.
            fib = a + b;
            printf("%d ", fib);
            a = b;
            b = fib;

            if(fib > 13) {
            break;
            }

        }
    */

}