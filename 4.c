#include "lab3.h"

void danger_signal(int N, int *danger) {
    for (int i = 0; i < N; i++) {
        if (danger[i] == 1) {
            printf("%d\t\tYES\n", i + 1);
            scanf("%*c");
        }
        else {
            printf("%d\t\tNO\n", i + 1);
            scanf("%*c");
        }
    }
}