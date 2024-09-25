#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
    int m1[8][8], m2[8][8], out[8][8], N, i, j, k;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            out[i][j] = 0;
            for (k = 0; k < N; k++) {
                out[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N - 1; j++) {
            printf("%d ", out[i][j]);
        }
        printf("%d", out[i][j]);
        printf("\n");
    }
    return 0;
}

