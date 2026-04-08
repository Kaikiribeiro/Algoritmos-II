#include <stdio.h>

int main() {
    char frase[100], palavra[50];
    int i, j, achou;

    for (i = 0; i < 100; i++) {
        scanf("%c", &frase[i]);
        if (frase[i] == '\n') {
            break;
        }
    }

    scanf("%s", palavra);

    achou = 0;
    for (i = 0; i <= 100; i++) {
        if (frase[i] == '\0') {
            break;
        }
        j = 0;
        while (palavra[j] != '\0' && frase[i + j] == palavra[j]) {
            j++;
        }
        if (palavra[j] == '\0') {
            achou = 1;
            break;
        }
    }

    if (achou) {
        printf("Encontrada\n");
    } else {
        printf("Nao encontrada\n");
    }

    return 0;
}
