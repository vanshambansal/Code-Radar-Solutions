#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100];
    scanf("%s",s);
    int len = 0;

    while(s[len]!='\0'){
        len++;
    }
    for(int i=len-1;i>=0;i--){
        printf("%c",s[i]);
    }

    return 0;
}