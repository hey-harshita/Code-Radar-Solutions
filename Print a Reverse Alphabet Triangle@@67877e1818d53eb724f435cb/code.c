#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++) {
        for (char j='A'+i; j<='A'+a+1-i; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}