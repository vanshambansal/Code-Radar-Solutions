#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100]; 
    char s1[100];
    fgets(s,100,stdin);
    fgets(s1,100,stdin);
    
    int i=0;
    while(s[i]!='\0'&&s[i]!='\n'){
        
        i++;
    }

    int j=0;
    while(s1[j]!='\0'&&s1[j]!='\n'){
        s[i]=s1[j];
        i++;
        j++;
    }
    s[i]='\0';
    printf("%s",s);


    return 0;
}