#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100];
    scanf("%s",s);
    printf("%s",strrev(s));


    return 0;
}