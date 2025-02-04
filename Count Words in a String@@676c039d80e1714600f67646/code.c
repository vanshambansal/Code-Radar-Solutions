#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100];
    int length=0;
    fgets(s,sizeof(s),stdin);
    count=1;

    while(s[length]!='\o'){
        length++
    }

    for(int i=0;i<length;i++){
        if (s[i]==" "){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}