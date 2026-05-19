#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h> // abs() 함수와 qsort()를 쓰기 위해 필요

    int compare(const void* a, const void* b) {
        return (*(int*)a - *(int*)b);
    }

    int main() {
        int N;
        scanf("%d", &N);

        int X[100000];
        int Y[100000];

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &X[i], &Y[i]);
        }

        qsort(X, N, sizeof(int), compare);
        qsort(Y, N, sizeof(int), compare);

        int best_x = X[N / 2];
        int best_y = Y[N / 2];

        long long total_distance = 0;
        for (int i = 0; i < N; i++) {
            total_distance += abs(X[i] - best_x) + abs(Y[i] - best_y);
        }

        printf("%lld\n", total_distance);

        return 0;
    }