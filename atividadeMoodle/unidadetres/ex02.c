#include<stdio.h>

int dobro(int x);

int main() {
    int n;
    scanf("%i", &n);
    printf("%i", dobro(n));
    return 0;
}

int dobro(int x) {
    return x * 2;
}
