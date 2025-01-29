#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scaf("%d",&a);
    printf(You entered: "%d", a);
    return 0;
}