#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++) {
        for (char j=1; j<=i; j++) {
            char final='A';
            printf("%c ",final);
        }
        printf("\n");
    }
    return 0;
}