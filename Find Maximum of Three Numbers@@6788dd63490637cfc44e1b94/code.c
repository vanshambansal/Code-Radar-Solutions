#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a>b&&a>c)?printf("%d",a):
    (b>a&&b>c)?printf("%d",b):
    printf("%d",c);
    return 0;
}