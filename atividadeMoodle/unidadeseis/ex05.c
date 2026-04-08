#include <stdio.h>

int main() {
    int n;
    int cont[10] = {0};

    scanf("%d", &n);

    if (n < 0) n = -n;
    if (n == 0) cont[0] = 1;

    while (n > 0) {
        int d = n % 10;
        cont[d]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d=%d", i, cont[i]);
        if (i < 9) {
            printf(", ");
        } else { printf(".\n"); }
    }

    return 0;
}
