#include <stdio.h>

void crescente(int *v, int inicio, int fim);

void decrescente(int *v, int inicio, int fim);

int main() {
    int v[15], x;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &x);

    crescente(v, 0, x - 1);
    decrescente(v, x + 1, 14);

    for (int i = 0; i < 15; i++) {
        printf("%d ", v[i]);
        printf("\n");
    }

    return 0;
}

void crescente(int *v, int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        for (int j = i + 1; j <= fim; j++) {
            if (v[i] > v[j]) {
                int tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
}

void decrescente(int *v, int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        for (int j = i + 1; j <= fim; j++) {
            if (v[i] < v[j]) {
                int tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
}
