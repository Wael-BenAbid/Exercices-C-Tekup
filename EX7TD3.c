#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char phrase[256];
    int nb_lettres = 0;
    int nb_chiffres = 0;
    int nb_espaces = 0;
    int nb_voyelles = 0;
    int i = 0;

    printf("Entrez une phrase : ");
    if (fgets(phrase, sizeof(phrase), stdin) != NULL) {

        size_t len = strlen(phrase);
        if (len > 0 && phrase[len - 1] == '\n') {
            phrase[len - 1] = '\0';
        }

        while (phrase[i] != '\0') {
            char c = phrase[i];

            if (isalpha(c)) {
                nb_lettres++;

                char minc = tolower(c);
                if (minc == 'a' || minc == 'e' || minc == 'i' || minc == 'o' || minc == 'u' || minc == 'y') {
                    nb_voyelles++;
                }
            }
            else if (isdigit(c)) {
                nb_chiffres++;
            }
            else if (isspace(c)) {
                nb_espaces++;
            }

            i++;
        }

        printf("\n--- Statistiques de la phrase ---\n");

        printf("Nombre de lettres : %d\n", nb_lettres);
        printf("Nombre de chiffres : %d\n", nb_chiffres);
        printf("Nombre d'espaces : %d\n", nb_espaces);
        printf("Nombre de voyelles : %d\n", nb_voyelles);
    }

    return 0;
}
