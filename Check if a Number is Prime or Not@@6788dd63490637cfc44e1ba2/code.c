#include <stdio.h>

int main() {
    int a;
    scanf("%d");
    if (a<2) printf("Not Prime"); return 0;
    for (int i=2; i<=a/2; i++) {
        if (a%i==0) printf("Not Prime");
    }
    printf("Prime");
    return 0;
}