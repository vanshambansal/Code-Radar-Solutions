#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    (ch=="a"||"e"||"i"||"o"||"u")?printf("Vowel"):printf("Consonant");
    return 0;
}