#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++) {
        for (char j=1; j<='A'+i-1; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}