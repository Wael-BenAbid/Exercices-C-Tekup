#include <stdio.h>

int main() {
    int A[30][20];
    int B[30][20];
    int S[30][20];
    int N,M;
    do {
        printf("donner N: ");
        scanf("%d", &N);
    } while (N > 29 || N <= 0);
    do {
        printf("donner M: ");
        scanf("%d", &M);
    } while (N > 19 || M <= 0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf(" %d ", S[i][j]);
        }
        printf("\n");
    }
}
