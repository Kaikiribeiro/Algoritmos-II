#include <stdio.h>

void troca(int *x, int *y);

int main() {
    int x = 10;
    int y = 20;
    printf("%d | %d\n", x, y);
    troca(&x, &y);
    printf("%d | %d", x, y);
    return 0;
}

void troca(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}
