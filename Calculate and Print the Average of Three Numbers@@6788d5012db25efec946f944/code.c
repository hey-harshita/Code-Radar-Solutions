#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    int d=(a+b+c)/3;
    printf("Average: %.2f", &d);
    return 0;
}