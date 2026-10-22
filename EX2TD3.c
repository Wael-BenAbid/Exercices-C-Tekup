#include <stdio.h>

int main() {
    int T[21];
    int N, val, pos;
    int i, temp;
    do {
        printf("Entrez la taille du tableau N (1 <= N <= 20) : ");
        scanf("%d", &N);
    } while (N <= 0 || N > 20);

    printf("\n Remplissage du tableau \n");
    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("\nEntrez la valeur a inserer (val) : ");
    scanf("%d", &val);
    do {
        printf("Entrez la position d'insertion (entre 0 et %d) : ", N);
        scanf("%d", &pos);
    } while (pos < 0 || pos > N);
    for (i = N; i > pos; i--) {
        T[i] = T[i - 1];
    }
    T[pos] = val;
    N++;
    printf("\n Tableau apres insertion de %d a la position %d : ", val, pos);
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    for (i = 0; i < N / 2; i++) {
        temp = T[i];
        T[i] = T[N - 1 - i];
        T[N - 1 - i] = temp;
    }

    printf("\n Tableau inverse \n");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int T[21];
    int N, val, pos;
    int i, temp;
    do {
        printf("Entrez la taille du tableau N (1 <= N <= 20) : ");
        scanf("%d", &N);
    } while (N <= 0 || N > 20);

    printf("\n Remplissage du tableau \n");
    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("\nEntrez la valeur a inserer (val) : ");
    scanf("%d", &val);
    do {
        printf("Entrez la position d'insertion (entre 0 et %d) : ", N);
        scanf("%d", &pos);
    } while (pos < 0 || pos > N);
    for (i = N; i > pos; i--) {
        T[i] = T[i - 1];
    }
    T[pos] = val;
    N++;
    printf("\n Tableau apres insertion de %d a la position %d : ", val, pos);
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    for (i = 0; i < N / 2; i++) {
        temp = T[i];
        T[i] = T[N - 1 - i];
        T[N - 1 - i] = temp;
    }

    printf("\n Tableau inverse \n");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
