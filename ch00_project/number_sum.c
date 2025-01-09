#include <stdio.h>

// 1. 정숫값 입력 받기 (ex : 412)
// 2. 
// 3. 출력 : 4 + 1 + 2 = 7

int main() {
    int num = 412;
    int hundred, ten, one;

    hundred = num / 100;
    ten = num / 400;
    one = num % 10;

    int sum = hundred + ten + one;

    printf("입력받은 정수의 합은 %d입니다.\n", sum);
}

/*교수님 풀이
int main() {

    int num;
    int total = 0;

    printf("숫자 : ");
    scanf("%d", &num);

    while(num > 0) {
        total = total + num % 10;
        num = num / 10; → num /= 10
    }
    printf("총합: %d", total);

}
*/
