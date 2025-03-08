#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    char final='A';
    for (int i=1; i<=a; i++) {
        for (char j=1; j<=i; j++) {
            printf("%c ",final);
        }
        printf("\n");
    }
    return 0;
}