#include <stdio.h>

int main() {
    float nombre, carre;

    //saisir
    printf("Entrez un nombre en cm: ");
    scanf("%f", &nombre);

    // Calcul du carré
    carre = nombre * nombre;

    // Affichage
    printf("Le carre de en cm2  %.2f est : %.2f\n ", nombre, carre);

    return 0;
}
