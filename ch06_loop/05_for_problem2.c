#include <stdio.h>

// 구구단 2~9단까지 출력하는 프로그램'
// 반복문 1개 → i : 2 ~ 9단
//  반복문 1개 → 단(i*1 ~ i*9)

int main(){

    for(int i = 2; i<=9; i++) {  // 2단인지, 3단인지, 단수를 결정
         for(int j = 1; j <=9; j++) {  // *1~*9까지 출력
        printf("%d * %d = %d\n", i, j,  i * j);
        }
    }
    
    

}