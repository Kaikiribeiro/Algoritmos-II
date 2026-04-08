#include <stdio.h>

int main() {
    int n;
    int vetor[100]; //fui obrigado a fazer isso (por isso prefiro java).

    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Número inválido!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}