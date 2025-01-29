#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    printf("Area: %.2f", 3.14*float(a*a));
    return 0;
}