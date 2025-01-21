#include <stdio.h> 

int len(char* p); 

int main() { 
    char* p1 = "2022"; 
    char* p2 = "202207";   

    printf("%d", len(p1) + len(p2));   // 4+6 = 10
                                        // ※Tip) len(p1)값을 계산했다면, 굳이 len(p2)값은 구하지않아도 계산할 수 있음!
} 

int len(char*p) { 
    int r = 0;      
    while(*p != '\0'){ 
        p++; 
        r++;
    } 
    return r;
}