#include <stdio.h>

int par(int *v, int n, int *par);

int imp(int *v, int n, int *imp);

int main() {
    int n;
    int vetor[100], p[100], i[100];

    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Número inválido!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int tp = par(vetor, n, p);
    int ti = imp(vetor, n, i);

    printf("Pares:\n");
    for (int i = 0; i < tp; i++) {
        printf("%d\n", p[i]);
    }

    printf("Ímpares:\n");
    for (int j = 0; j < ti; j++) {
        printf("%d\n", i[j]);
    }

    return 0;
}

int par(int *v, int n, int *par) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (*(v + i) % 2 == 0) {
            *(par + c) = *(v + i);
            c++;
        }
    }
    return c;
}

int imp(int *v, int n, int *imp) {
    int c = 0;
    for (int j = 0; j < n; j++) {
        if (*(v + j) % 2 != 0) {
            *(imp + c) = *(v + j);
            c++;
        }
    }
    return c;
}
