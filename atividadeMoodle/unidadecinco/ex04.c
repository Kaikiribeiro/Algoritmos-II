#include<stdio.h>

int qtdN(int n);

int main() {
    int x = 5;
    printf("%d", qtdN(x));
    return 0;
}

int qtdN(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 1 + qtdN(n - 1);
    }
}
