#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=i; j++) {
            for (int k=1; k<=100; k++) {
                printf("%d ", a);
            }
        }
        printf("\n");
    }
    return 0;
}