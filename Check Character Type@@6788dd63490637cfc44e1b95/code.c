#include <stdio.h>
#include <ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    (ch=='a'||ch=='e'||ch== 'i'||ch=='o'||ch=='u')?printf("Vowel"):
    ((ch>='a' && ch<='z')&&(ch>='A'&&ch<='Z'))?printf("Consonant"):
    (isdigit(ch))?printf("Digit"):
    printf("Special Character");
    return 0;
}