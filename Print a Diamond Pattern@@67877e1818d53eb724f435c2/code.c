#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b=a*2-1;
    for (int i=1; i<=b; i++) {
        for (int j=1; j<=b; j++) {
            if (j<=a-i || j>=b+1+i-a || j<=i-a || j<=b+1+a-i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}