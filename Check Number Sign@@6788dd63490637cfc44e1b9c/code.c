#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a>0?printf("Positive"):
    a<0?printf("Negative"):
    printf("Zero");
    return 0;
}