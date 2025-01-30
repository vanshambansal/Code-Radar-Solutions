#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a==1?printf("31"):
    a==2?printf("28"):
    a==3?printf("31"):
    a==4?printf("30"):
    a==5?printf("31"):
    a==6?printf("30"):
    a==7?printf("31"):
    a==8?printf("31"):
    a==9?printf("30"):
    a==10?printf("31"):
    a==11?printf("30"):
    a==12?printf("31"):
    printf("Invalid month");

    return 0;
}