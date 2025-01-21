#include <stdio.h>

void main()
{
    // "KOREA" → 101번지에 있다고 가정
    // p → 101번지
    // p+1 → 주소 연산: 101번지 + 1 * char(1 byte) = 102번지
    // ※ 형식지정자가 어떤건지 잘 보고 풀기
	char *p = "KOREA";
    printf("%s\n" , p);        // KOREA : 101번지부터 널문자까지 출력
    printf("%s\n" , p+3);      // EA    : 104번지부터 널문자까지 출력
    printf("%c\n" , *p);       // K     : 간접참조 101번지 값
    printf("%c\n" , *(p+3));   // E     : 간접참조 104번지 값
}