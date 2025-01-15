/**
 * 포인터 대입 규칙
 *  - 포인터는 가리키는 변수의 자료형이 같을 때만 대입 가능
 *  - 형 변환을 사용한 포인터의 대입은 언제나 가능
 *  ex) 
 *   double a = 3.4;
 *   double *pd = &a;
 *   int *pi;
 *   pi = (int *)pd;  // int형 변수의 주소로 형 변환(Casting)
 */

#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;
    // &a = &b;  (X) 주소는 상수값
    // pd = p;   (X) pd도 상수값
    printf("%lf\n", *pd);
}