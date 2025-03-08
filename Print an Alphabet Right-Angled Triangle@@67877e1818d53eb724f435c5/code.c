#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    for (int i='A'; i<=a; i++) {
        for (int j='A'; j<=i; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}