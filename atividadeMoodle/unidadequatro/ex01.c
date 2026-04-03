#include <stdio.h>

void testarEscopo();

int valor = 100;

int main()
{
    testarEscopo();

    printf("%d\n", valor);

    return 0;
}

void testarEscopo()
{
    int valor = 20;

    printf("%d\n", valor);
}
