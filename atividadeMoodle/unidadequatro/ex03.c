#include <stdio.h>
void alterar(int *n);
int main()
{
    int x = 1000;
    printf("Antes: %d\n", x);
    alterar(&x);
    printf("Depois: %d\n", x);
    return 0;
}

void alterar(int *n)
{
    *n = 10;
}