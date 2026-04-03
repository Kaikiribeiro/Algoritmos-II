#include <stdio.h>

void alterar(char *p);

int main() {
    char v[6] = "kaiki";
    alterar(v);

    printf("%s", v);

    return 0;
}

void alterar(char *p) {
    *p = 't';
}
