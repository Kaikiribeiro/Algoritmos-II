#include <stdio.h>

int soma(int x, int y);

void resultado(int x, int y);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    resultado(a, b);
    return 0;
}

int soma(int x, int y) {
    return x + y;
}

void resultado(int x, int y) {
    printf("%d", soma(x, y));
}
