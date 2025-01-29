#include <stdio.h>
#include <ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("Uppercase");
    }else if(islower(ch)){
        printf("Lowercase");
    }else{
        printf("Not an alphabet")
    }
    return 0;
}