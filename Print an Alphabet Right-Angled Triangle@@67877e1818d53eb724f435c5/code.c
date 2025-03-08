#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    for (char i=1; i<=a; i++) {
        char final='A';
        for (char j=1; j<=i; j++) {
            printf("%c ", final);
            final++;
        }
        printf("\n");
    }
    return 0;
}