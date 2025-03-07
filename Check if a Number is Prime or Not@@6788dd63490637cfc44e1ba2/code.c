#include <stdio.h>

int main() {
    int a;
    scanf("%d");
    if (a<2) printf("Not Prime");
    for (int i=2; i<=a/2; i++) {
        if (a==2) printf("Prime");
    }
    printf("Prime");
    return 0;
}