#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

    int main() {
        int N;
        if (scanf("%d", &N) != 1) return 0;

        for (int r = 0; r < N; r++) {
            int count_A[5] = { 0 };
            int count_B[5] = { 0 };
            int num_cards, card_type;

            scanf("%d", &num_cards);
            for (int i = 0; i < num_cards; i++) {
                scanf("%d", &card_type);
                count_A[card_type]++;
            }

            scanf("%d", &num_cards);
            for (int i = 0; i < num_cards; i++) {
                scanf("%d", &card_type);
                count_B[card_type]++;
            }

            int decided = 0;
            for (int i = 4; i >= 1; i--) {
                if (count_A[i] > count_B[i]) {
                    printf("A\n");
                    decided = 1;
                    break;
                }
                else if (count_B[i] > count_A[i]) {
                    printf("B\n");
                    decided = 1;
                    break;
                }
            }

            if (!decided) {
                printf("D\n");
            }
        }

        return 0;
    }