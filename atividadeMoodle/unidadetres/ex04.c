#include <stdio.h>

void ola(char nome[100]);

int main() {
    char nome[100];
    scanf("%s", nome);
    ola(nome);
    return 0;
}

void ola(char nome[100]) {
    printf("Ola %s", nome);
}
