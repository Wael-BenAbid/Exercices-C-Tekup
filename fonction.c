#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Entrer a :");
    scanf("%f", &a);

    printf("Entrer b :");
    scanf("%f", &b);

    printf("Entrer c :");
    scanf("%f", &c);

    if (a == 0) {
        x1 = -c / b;
        printf("Une solution reelle.\nx=%f\n", x1);
        return 0;
    }

    delta = b*b - 4*a*c;
    x1= (-b+sqrtf(delta))/(2*a);
    x2= (-b-sqrtf(delta))/(2*a);

    if (delta > 0) {
        printf("Deux solutions reelles distinctes.\nx1=%.3f x2=%.3f\n", x1, x2);
    }
    else if (delta == 0) {
        printf("Une solution reelle double.\nx=%f\n", x1);
    }
    else {
        printf("Aucune solution reelle.\n");
    }
    return 0;
}

