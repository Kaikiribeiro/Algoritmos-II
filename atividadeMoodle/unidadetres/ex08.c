#include <stdio.h>

int quadrado(int x);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", quadrado(n));
    return 0;
}

int quadrado(int x) {
    return x * x;
}
