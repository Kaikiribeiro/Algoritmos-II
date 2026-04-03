#include <stdio.h>

int contador = 0;

void contar();

int main()
{
    contar();
    contar();
    contar();

    return 0;
}

void contar()
{
    contador++;
    printf("%d\n", contador);
}