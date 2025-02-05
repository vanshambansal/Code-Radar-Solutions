#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100];
    scanf("%d",s);
    int length=0;
    while(s[length]!='\0'){
        length++;
    printf("%d",length);
    }

    return 0;
}