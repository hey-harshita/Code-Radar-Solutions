#include <stdio.h>

int main() {
    int a;
    scanf("%d");
    if (a<2) printf("Not Prime");
    else if (a==2) printf ("Prime")
    for (int i=2; i<=a; i++) {
        if (a%i==0) printf("Not Prime");
    }
    printf("Prime");
    return 0;
}