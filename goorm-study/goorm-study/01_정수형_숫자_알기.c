#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

int main3s() {
	char N[100]; // 넉넉하게 배열 100칸을 선언한다.

	scanf("%s", N); // 값을 입력받는다.

	printf("%d\n", strlen(N)); // strlen 함수는 정수을 출력하기 때문에 %d 를 쓴다.

	return 0;
}
