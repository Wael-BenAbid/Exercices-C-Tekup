#include <stdio.h>
#include <math.h>

int main() {
    int n, i, somme = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            somme = somme + i;
        }
    }
    if (somme == n) {
        printf("%d est un nombre parfait.\n", n);
    } else {
        printf("%d n'est pas un nombre parfait.\n", n);
    }
    return 0;
}
