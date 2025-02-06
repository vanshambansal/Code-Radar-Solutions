#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100]; 
    char s1[100];
    fgets(s,100,stdin);
    fgets(s1,100,stdin);
    int length =0;
    while(s[length]!='\0'){
        length++;
    }
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
        i++;
    }

    int j=0;
    while(s1[j]!='\0'&&s1[j]!='\n'){
        s[length]=s1[j];
        length++;
        j++;
    }
    s[length]='\0'
    printf("%s",s);


    return 0;
}