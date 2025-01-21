#include <stdio.h>

/**
 * 변수          : 하나의 값을 담는 변수
 * 포인터 변수   : 주소를 담는 변수
 * 배열			: 동일한 자료형의 여러값을 담는 공간
 * 포인터 배열	: 포인터 변수를 담는 배열
 * 배열과 포인터: 포인터를 이용해서 배열을 사용하는 방법
 */

int main() {
	// 포인터 배열
	int *arr[3];
	int a = 12, b = 24, c = 36;

	arr[0] = &a;  // arr[]는 포인터 배열 → 주소를 담아야함!
	arr[1] = &b;
	arr[2] = &c;

	// **arr: 이중포인터 → *(*arr)
	// *arr은 arr[0]과 동일한 주소
	// *arr == arr[0] == &a
	printf("%d\n", *arr[1] + **arr + 1);  // 24 + (12+1) = 37
}