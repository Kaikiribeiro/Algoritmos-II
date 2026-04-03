#include <stdio.h>

void alterar(int *x);

int main() {
    int n = 10;

    printf("%d\n", n);

    alterar(&n);

    printf("%d", n);

    return 0;
}

void alterar(int *x) {
    *x = 5;
}
