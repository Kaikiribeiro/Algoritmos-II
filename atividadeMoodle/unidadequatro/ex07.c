#include <stdio.h>

void incrementar(int *x);

int main()
{
    int num = 5;

    printf("%d\n", num);
    incrementar(&num);
    printf("%d\n", num);

    return 0;
}

void incrementar(int *x)
{
    (*x)++;
}