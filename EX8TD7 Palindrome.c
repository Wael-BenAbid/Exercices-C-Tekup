#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char mot[100];
    int i, j;
    int est_palindrome = 1; // 1 pour vrai, 0 pour faux

    // Saisie du mot
    printf("Entrez un mot : ");
    scanf("%s", mot);

    // Calcul de la longueur effective du mot
    int longueur = strlen(mot);

    i = 0;
    j = longueur - 1;

    while (i < j) {
        // On convertit les caractères en minuscules pour comparer "R" et "r" par exemple
        if (tolower(mot[i]) != tolower(mot[j])) {
            est_palindrome = 0;
            break; 
        }
        i++;
        j--;
    }

    if (est_palindrome) {
        printf("\"%s\" -> Palindrome\n", mot);
    } else {
        printf("\"%s\" -> N'est pas un palindrome\n", mot);
    }

    return 0;
}