#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}


int main() {
    char s[100] ,reverse[100];
    int i,length=0;
    scanf("%s",s);
    while(s[length]!='\0'){
        length++;
    }

    for(i=0;i<length;i++){
        reverse[i]=s[length-i-1];
    }
    for(i=0;i<length;i++){
        if(reverse[i]!=s[i]){
            printf("No");
            return 0;
        }
        printf("Yes");
        
    }

    return 0;
}