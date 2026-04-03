#include <stdio.h>

void valor(int x);
void referencia(int *x);

int main()
{
    int n = 10;

    printf("Valor Original: %d\n", n);

    valor(n);
    printf("%d\n", n);

    referencia(&n);
    printf("%d\n", n);

    return 0;
}

void valor(int x)
{
    x = x + 5;
    
}

void referencia(int *x)
{
    *x = *x + 5;
    
}