#include <stdio.h>

void alterar(int *p);

int main() {
    int v[3] = {1, 2, 3};

    alterar(v);

    for (int i = 0; i < 3; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}

void alterar(int *p) {
    *p = 10;
    *(p + 1) = 20;
    *(p + 2) = 30;
}
