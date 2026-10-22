#include <stdio.h>

int main() {
    int T[20];
    int N, val;
    int i, j, temp;

    do {
        printf("Entrez la taille du tableau N (1 <= N <= 20) : ");
        scanf("%d", &N);
    } while (N <= 0 || N > 20);

    printf("\n--- Saisie des elements du tableau ---\n");
    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (T[j] > T[j + 1]) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }

    printf("\nTableau trie par ordre croissant : ");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    printf("\nEntrez la valeur a rechercher (val) : ");
    scanf("%d", &val);

    int premiere_pos = -1;
    int derniere_pos = -1;
    int frequence = 0;

    for (i = 0; i < N; i++) {
        if (T[i] == val) {
            if (premiere_pos == -1) {
                premiere_pos = i;
            }
            derniere_pos = i;
            frequence++;
        }
    }

    if (frequence > 0) {
        printf("\n--- Resultats de la recherche ---\n");
        printf("a. La premiere occurrence de %d est a l'indice : %d\n", val, premiere_pos);

        printf("b. La valeur %d apparait aux indices : ", val);
        for (i = 0; i < N; i++) {
            if (T[i] == val) {
                printf("%d ", i);
            }
        }
        printf("\n   Frequence d'apparition : %d\n", frequence);

        printf("c. La derniere occurrence de %d est a l'indice : %d\n", val, derniere_pos);
    } else {
        printf("\nLa valeur %d n'existe pas dans le tableau.\n", val);
    }

    return 0;
}
