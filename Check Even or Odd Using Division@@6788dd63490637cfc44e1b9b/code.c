#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    (a%2==0)?printf("Even"):printf("Odd");
    return 0;
}