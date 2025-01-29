#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    (ch=="a"||ch=="e"||ch=="i"||ch=="o"||ch=="u")?printf("Vowel"):printf("Consonant");
    return 0;
}