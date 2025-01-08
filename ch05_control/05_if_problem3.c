#include <stdio.h>

/*vscode tip) 한 줄 복사 단축키 = shift + alt + 방향키
              한 줄 위 아래로 움직이기 =  alt + 방향키*/

int main(){
    // 두 수를 입력받고 크기를 비교하는 프로그램

    int num1, num2;
    printf("첫 번째 수 : ");
    scanf("%d", &num1);
    printf("두 번째 수 : ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("%d 더 크다.", num1);
    } else if(num1 < num2) {
        printf("%d 더 작다.", num1);
    } else if(num1 == num2) {
        printf("%d와 %d가 같다.", num1, num2);
    }
}