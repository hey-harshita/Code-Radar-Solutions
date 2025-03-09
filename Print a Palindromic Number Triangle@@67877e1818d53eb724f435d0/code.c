#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    b=a*2-1;
    for (int i=1; i<=a; i++) {
        for (char j=1; j<=i; j++) {
            printf("%d%d", j, a-j);
        }
        printf("\n");
    }
    return 0;
}