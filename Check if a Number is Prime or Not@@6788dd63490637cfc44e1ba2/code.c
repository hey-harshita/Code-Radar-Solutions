#include <stdio.h>

int main() {
    int a;
    scanf("%d");
    if (a<2) printf("Not Prime");
    for (int i=1; i<=a; i++) {
        if (a%i==0) printf("Not Prime");
    }
    printf("Prime")
    return 0;
}