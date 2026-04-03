#include <stdio.h>

int modf(int *p);

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i <= 4; i++) {
        printf("%d\n", vetor[i]);
    }

    modf(vetor);
    printf("Modifiquei!\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}

int modf(int *p) {
    *p = 1;
    *(p + 1) = 2;
    *(p + 2) = 3;
    *(p + 3) = 4;
    *(p + 4) = 5;
}
