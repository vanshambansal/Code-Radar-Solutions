#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a=='A'?printf("Excellent"):
    a=='B'?printf("Good"):
    a=='C'?printf("Average"):
    a=='D'?printf("Below Average"):
    a=='E'?printf("Fail"):
    printf("Invalid grade");
    return 0;
}