#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a>=18&&b==1?printf("Eligible"):printf("Not Eligible");
    return 0;
}