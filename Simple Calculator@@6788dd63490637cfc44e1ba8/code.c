#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    c=='+'?printf("%d",a+b):
    c=='-'?printf("%d",a-b):
    c=='/'?printf("%d",a/b):
    c=='*'?printf("%d",a*b):
    printf("Error");
    return 0;
}