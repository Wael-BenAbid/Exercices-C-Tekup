#include <stdio.h>


int main() {
    int A[20][20];
    int N,i,j;
    do {
        printf("donner N: ");
        scanf("%d", &N);
    } while (N > 19 || N <= 0);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    int s = 1;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if ((j < i) && (A[i][j] != 0)) s = 0;
        }
    }
    printf(s ? "A est sup\n" : "A nest pas sup\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }
}
