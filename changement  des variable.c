#include <stdio.h>

int main() {
    int A, B, temp;
    printf("Entrez la valeur de A : ");
    scanf("%d", &A);
    printf("Entrez la valeur de B : ");
    scanf("%d", &B);
    // Permutation
    temp = A;
    A = B;
    B = temp;
    printf(" : A = %d, B = %d\n", A, B);

    return 0;
}
