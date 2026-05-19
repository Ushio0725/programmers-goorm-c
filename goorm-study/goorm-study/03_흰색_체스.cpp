#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    char space[8][9];
    int white = 0;

    // 1. 우선 8줄을 모두 입력받는다.
    for (int i = 0; i < 8; i++) {
        scanf("%s", space[i]);
    }

    // 2. 입력이 다 끝난 후 전체 칸을 돌며 개수를 센다.
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0 && space[i][j] == '1') {
                white++;
            }
        }
    }

    printf("%d\n", white);

    return 0;
}