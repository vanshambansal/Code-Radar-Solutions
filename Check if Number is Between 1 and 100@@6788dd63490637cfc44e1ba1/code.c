#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a>=1&&a<=100?printf("In Range"):printf("Out of Range");
    return 0;
}