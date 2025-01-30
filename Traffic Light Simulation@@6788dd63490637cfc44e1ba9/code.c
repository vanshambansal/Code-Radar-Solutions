#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    a=='R'?printf("Stop"):
    a=='G'?printf("Go"):
    a=='Y'?printf("Slow Down"):
    printf("Invalid input");
    return 0;
}