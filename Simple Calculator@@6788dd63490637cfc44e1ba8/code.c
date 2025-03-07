#include <stdio.h>

int main() {
    char a, b, c;
    scanf("%d %d %d", &a, &b &c);
    switch (c) {
        case '+' : printf("%d", a+b);
        break 0;
        case '-' : printf("%d", a-b);
        break 0;
        case '*' : printf("%d", a*b);
        break;
        case '/' : printf("%d", a/b);
        break;
    }
    return 0;
}