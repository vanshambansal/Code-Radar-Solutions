#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int count=0;
    char str[100];
    scanf("%s",str);
    for (int i=0;str[i]!='\0';i++){
        if(str[i] == 'a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
            
        }
    }
    printf("%d",count);
    return 0;
}