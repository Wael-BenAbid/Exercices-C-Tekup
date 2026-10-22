#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char mot[100];
    int est_palindrome = 1; // 1 pour vrai, 0 pour faux

    // Saisie du mot
    printf("Entrez un mot : ");
    scanf("%s", mot);

    // Calcul de la longueur effective du mot
    int longueur = strlen(mot);
    for (int i=0;i<longueur/2;i++){
        if (tolower(mot[i]) != tolower(mot[longueur-i-1])) est_palindrome = 0;
    }
    if (est_palindrome) {
        printf("\"%s\" -> Palindrome\n", mot);
    } else {
        printf("\"%s\" -> N'est pas un palindrome\n", mot);
    }

    return 0;
}