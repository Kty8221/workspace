#include <stdio.h>

// 3개의 수를 입력 받고, 큰 숫자로 정렬해서 출력하는 프로그램

int main() {
    int num1 = 20;
    int num2 = 10;
    int num3 = 50;

int temp = 0;

    if(num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num1 < num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if(num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("%d > %d > %d", num1, num2 , num3);
}