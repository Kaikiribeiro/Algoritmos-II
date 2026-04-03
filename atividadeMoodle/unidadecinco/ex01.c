#include <stdio.h>
int fat(int n);
int main()
{
    int x = 5;
    printf("%d", fat(x));

    return 0;
}

int fat(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fat(n - 1);
}