#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    (b>a)?printf("Profit"):
    (a>b)?printf("Loss"):
    printf("No Profit No Loss");
    return 0;
}