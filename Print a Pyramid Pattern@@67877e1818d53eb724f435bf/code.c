#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b=a*2-1;
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=b; j++) {
            if (j<=a-i || j>=b+i-a)
        }
        printf("\n");
    }
    return 0;
}