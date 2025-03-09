#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=2*i-1; j++) {
            int k=a-j;
            printf("%d%d", j, k);
        }
        printf("\n");
    }
    return 0;
}