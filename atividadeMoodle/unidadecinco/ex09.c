#include <stdio.h>

int fatI(int n);

int fatR(int n);

int main() {
    int fatorar = 5;
    printf("%d\n", fatI(fatorar));
    printf("%d\n", fatR(fatorar));
    return 0;
}

int fatR(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatR(n - 1);
    }
}

int fatI(int n) {
    int total = 1;
    if (n == 0 || n == 1) {
        return total;
    } else {
        while (n > 0) {
            total = total * n;
            n--;
        }
        return total;
    }
}
