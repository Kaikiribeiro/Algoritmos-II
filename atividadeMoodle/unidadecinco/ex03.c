#include <stdio.h>

int pot(int n);

int main()
{
    int n = 5;
    printf("%d\n", pot(n));

    return 0;
}

int pot(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * pot(n - 1);
    }
}