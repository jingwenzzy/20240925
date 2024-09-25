#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
    int m1[8][8] = { 0 }, m2[8][8] = { 0 }, m3[8][8] = { 0 }, m4[8][8] = { 0 }, m5[8][8] = { 0 },
        m6[8][8] = { 0 }, m7[8][8] = { 0 }, m8[8][8] = { 0 }, m9[8][8] = { 0 }, m10[8][8] = { 0 },
        out[8][8], N, i, j, k;
    scanf("%d", &k);
    scanf("%d", &N);
    switch (k) {
    case 2:
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
        break;
    case 3:
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
                scanf("%d", &m3[i][j]);
            }
        }
        break;
    case 4:
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
                scanf("%d", &m3[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m4[i][j]);
            }
        }
        break;
    case 5:
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
                scanf("%d", &m3[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m4[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m5[i][j]);
            }
        }
        break;
    case 6:
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
                scanf("%d", &m3[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m4[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m5[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m6[i][j]);
            }
        }
        break;
    case 7:
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
                scanf("%d", &m3[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m4[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m5[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m6[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m7[i][j]);
            }
        }
        break;
    case 8:
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
                scanf("%d", &m3[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m4[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m5[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m6[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m7[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m8[i][j]);
            }
        }
        break;
    case 9:
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
                scanf("%d", &m3[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m4[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m5[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m6[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m7[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m8[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m9[i][j]);
            }
        }
        break;
    case 10:
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
                scanf("%d", &m3[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m4[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m5[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m6[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m7[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m8[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m9[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &m10[i][j]);
            }
        }
        break;
    }




    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            out[i][j] = m1[i][j] + m2[i][j] + m3[i][j] + m4[i][j] + m5[i][j] + m6[i][j] + m7[i][j] + m8[i][j] + m9[i][j] + m10[i][j];
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