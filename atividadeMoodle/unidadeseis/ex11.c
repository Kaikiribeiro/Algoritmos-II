#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    scanf("%s", s);

    while (s[i] != '\0') {
        if (s[i] == 'a' || s[i] == 'A') s[i] = '4';
        else if (s[i] == 'e' || s[i] == 'E') s[i] = '3';
        else if (s[i] == 'i' || s[i] == 'I') s[i] = '1';
        else if (s[i] == 'o' || s[i] == 'O') s[i] = '0';
        i++;
    }

    printf("%s\n", s);

    return 0;
}
