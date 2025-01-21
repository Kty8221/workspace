#include <stdio.h>


int mp(int base, int exp) {
    int res = 1;
    for(int i=0; i < exp; i++){
        res = res * base;
        // i=0, res=2(2*1)
        // i=1, res=4(2*2)
        // i=2, res=8(4*2) → 규칙발견(2의 제곱)
        // i=9, res=2^10 → 0부터 시작했으니까, 2^10
    }

    return res;
}

int main(){
    int res;
    res = mp(2,10);
    printf("%d",res);  // 1024
    return 0;
}

