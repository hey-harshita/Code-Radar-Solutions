#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=2*i-1; j++) {
            int b=a-j;
            printf("%d%d", j, b);
        }
        printf("\n");
    }
    return 0;
}