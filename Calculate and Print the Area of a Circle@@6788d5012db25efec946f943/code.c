#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    printf("Area: %d", 3.14*a*a);
    return 0;
}