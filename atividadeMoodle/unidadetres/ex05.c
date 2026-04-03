#include <stdio.h>

double media(double x, double z, double y);

int main() {
    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    printf("%.2lf", media(n1, n2, n3));
    return 0;
}

double media(double x, double z, double y) {
    return (x + y + z) / 3;
}
