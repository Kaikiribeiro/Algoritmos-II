#include <stdio.h>

void aprovado(double x);

int main() {
    double media;
    scanf("%lf", &media);
    aprovado(media);
    return 0;
}

void aprovado(double x) {
    if (x >= 6) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}
