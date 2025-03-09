#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b=a*2-1;
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=2*i-1; j++) {
            printf("%d%d", j, a-j);
        }
        printf("\n");
    }
    return 0;
}