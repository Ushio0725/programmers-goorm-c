#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main1233() {
	int D, L, R;
    int gauge = 0;
    int success = 0;

	scanf("%d %d %d", &D, &L, &R);

    // 게이지가 우측 한계선(R)을 넘지 않을 때까지만 반복
    while (gauge <= R) {
        gauge += D; // 게이지를 D만큼 증가시킴

        if (gauge >= L && gauge <= R) {
            success = 1; // 성공 표시
            break;       // 이미 성공했으니 반복문 탈출
        }
    }

    // 최종 결과 출력
    if (success == 1) {
        printf("Y\n");
    }
    else {
        printf("N\n");
    }
	return 0;
}