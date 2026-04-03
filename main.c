#include <stdio.h>

void troca(int *x, int *y);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    troca(&a, &b);
    printf("%d %d", a, b);
    return 0;
}

void troca(int *x, int *y) {
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}
