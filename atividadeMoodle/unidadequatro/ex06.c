#include <stdio.h>

int triplo(int x);

int main() {
    printf("%d", triplo(5));

    return 0;
}

int triplo(int x) {
    return x * 3;
}
