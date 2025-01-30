#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a==1?printf("Monday"):
    a==2?printf("Tuesday"):
    a==3?printf("Wednesday"):
    a==4?printf("Thursday"):
    a==5?printf("Friday"):
    a==6?printf("Saturday"):
    a==7?printf("Sunday"):
    printf("Invalid");
    return 0;
}