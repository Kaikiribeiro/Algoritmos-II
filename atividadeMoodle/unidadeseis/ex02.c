#include <stdio.h>

double media(int *p);

int maior(int *p);

int menor(int *p);

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }
    printf("Média: %.2lf\n", media(vetor));
    printf("Maior: %d\n", maior(vetor));
    printf("Menor: %d\n", menor(vetor));

    return 0;
}

double media(int *p) {
    double total = 0;
    for (int i = 0; i < 10; i++) {
        total += *(p + i);
    }
    return total / 10.0;
}

int maior(int *p) {
    int maior = *p;
    for (int i = 1; i < 10; i++) {
        if (*(p + i) > maior) {
            maior = *(p + i);
        }
    }
    return maior;
}

int menor(int *p) {
    int menor = *p;
    for (int i = 1; i < 10; i++) {
        if (*(p + i) < menor) {
            menor = *(p + i);
        }
    }
    return menor;
}
