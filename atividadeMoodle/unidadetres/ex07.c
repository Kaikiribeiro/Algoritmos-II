#include <stdio.h>

int Par(int n);

int main() {
    int n;

    scanf("%d", &n);

    if (Par(n)) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}

int Par(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
