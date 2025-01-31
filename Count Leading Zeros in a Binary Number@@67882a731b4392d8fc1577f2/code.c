#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int count=0;
    while((a&(1<<31))==1){
        count++;
        a=a<<1;
    }
        printf("%d",count); 

    return 0;
}