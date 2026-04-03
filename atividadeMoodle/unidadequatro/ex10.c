#include <stdio.h>

void soma5(int *x);

void dobra(int *x);

int main() {
    int n = 10; // n começa valendo 10

    soma5(&n); // envia o endereco de n, entao n passa a valer 15
    dobra(&n); // envia o endereco de n de novo, entao n passa a valer 30

    printf("%d", n); // mostra 30

    return 0;
}

void soma5(int *x) {
    *x = *x + 5; // altera o valor original: 10 + 5 = 15
}

void dobra(int *x) {
    *x = *x * 2; // altera o valor original: 15 * 2 = 30
}
