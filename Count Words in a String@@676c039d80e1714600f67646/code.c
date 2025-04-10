#include <stdio.h>
#include <stdlib.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100];
    int length=0;
    fgets(s,sizeof(s),stdin);
    // int count=1;
    int count = 0;
    int inWord = 0;


    while(s[length]!='\0'){
        length++;
    }

    // for(int i=0;i<length;i++){
    //     if (s[i]==' '){
    //         count++;
    //     }
    // }
    for(int i = 0; i < length; i++) {
    if (s[i] != ' ' && s[i] != '\n') {
        if (inWord == 0) {
            count++;
            inWord = 1;
        }
    } else {
        inWord = 0;
    }
}


    printf("%d",count);

    return 0;
}