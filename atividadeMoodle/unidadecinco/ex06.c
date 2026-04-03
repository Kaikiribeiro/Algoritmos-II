#include <stdio.h>

void dobrar(int *x);

int main() {
    int n = 10;
    dobrar(&n);
    printf("%d", n);
    return 0;
}

void dobrar(int *x) {
    *x = *x * 2;
}
