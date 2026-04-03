#include <stdio.h>

double soma(double a, double b, double c);

double media(double a, double b, double c);

double maior(double a, double b, double c);

int main() {
    double n1, n2, n3;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    printf("Soma: %.2lf\n", soma(n1, n2, n3));
    printf("Media: %.2lf\n", media(n1, n2, n3));
    printf("Maior valor: %.2lf\n", maior(n1, n2, n3));

    return 0;
}

double soma(double a, double b, double c) {
    return a + b + c;
}

double media(double a, double b, double c) {
    return soma(a, b, c) / 3;
}

double maior(double a, double b, double c) {
    double maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    return maior;
}
