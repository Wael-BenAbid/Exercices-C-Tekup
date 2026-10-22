#include <stdio.h>

int main() {
    int T[20], TPAIR[20], TIMPAIR[20];
    int N, choix;
    int i, j;
    int somme, min, max;
    int posMin, posMax;
    int nbPos, nbNeg;
    int nPair, nImpair;
    int produit;

    do {
        printf("Donner N (1 <= N <= 20) : ");
        scanf("%d", &N);
    } while (N < 1 || N > 20);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1. Afficher le tableau\n");
        printf("2. Calculer la somme\n");
        printf("3. Calculer le produit\n");
        printf("4. Chercher le minimum\n");
        printf("5. Chercher le maximum\n");
        printf("6. Afficher les positifs\n");
        printf("7. Afficher les negatifs\n");
        printf("8. Separer pairs et impairs\n");
        printf("9. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {

            case 1:
                printf("Les elements du tableau : ");
                for (i = 0; i < N; i++) {
                    printf("%d ", T[i]);
                }
                printf("\n");
                break;

            case 2:
                somme = 0;
                for (i = 0; i < N; i++) {
                    somme += T[i];
                }
                printf("La somme = %d\n", somme);
                break;

            case 3:
                produit = 1;
                for (i = 0; i < N; i++) {
                    produit *= T[i];
                }
                printf("Le produit = %d\n", produit);
                break;

            case 4:
                min = T[0];
                posMin = 0;

                for (i = 1; i < N; i++) {
                    if (T[i] < min) {
                        min = T[i];
                        posMin = i;
                    }
                }

                printf("Minimum = %d\n", min);
                printf("Position = %d (indice %d)\n",
                       posMin + 1, posMin);
                break;

            case 5:
                max = T[0];
                posMax = 0;

                for (i = 1; i < N; i++) {
                    if (T[i] > max) {
                        max = T[i];
                        posMax = i;
                    }
                }

                printf("Maximum = %d\n", max);
                printf("Position = %d (indice %d)\n",
                       posMax + 1, posMax);
                break;

            case 6:
                nbPos = 0;
                printf("Les elements positifs : ");

                for (i = 0; i < N; i++) {
                    if (T[i] >= 0) {
                        printf("%d ", T[i]);
                        nbPos++;
                    }
                }

                printf("\nNombre d'elements positifs = %d\n",
                       nbPos);
                break;

            case 7:
                nbNeg = 0;
                printf("Les elements negatifs : ");

                for (i = 0; i < N; i++) {
                    if (T[i] < 0) {
                        printf("%d ", T[i]);
                        nbNeg++;
                    }
                }

                printf("\nNombre d'elements negatifs = %d\n",
                       nbNeg);
                break;

            case 8:
                nPair = 0;
                nImpair = 0;

                for (i = 0; i < N; i++) {
                    if (T[i] % 2 == 0) {
                        TPAIR[nPair] = T[i];
                        nPair++;
                    } else {
                        TIMPAIR[nImpair] = T[i];
                        nImpair++;
                    }
                }

                printf("Tableau des pairs : ");
                for (i = 0; i < nPair; i++) {
                    printf("%d ", TPAIR[i]);
                }

                printf("\nTableau des impairs : ");
                for (i = 0; i < nImpair; i++) {
                    printf("%d ", TIMPAIR[i]);
                }

                printf("\n");
                break;

            case 9:
                printf("Fin du programme.\n");
                break;

            default:
                printf("Choix invalide !\n");
        }

    } while (choix != 9);

    return 0;
}
