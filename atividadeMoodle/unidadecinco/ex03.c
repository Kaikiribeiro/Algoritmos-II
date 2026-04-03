#include <stdio.h>

int pot(int base, int exp);

int main() {
    int base = 2;
    int exp = 3;
    printf("%d\n", pot(base, exp));

    return 0;
}

int pot(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * pot(base, exp - 1);
    }
}
