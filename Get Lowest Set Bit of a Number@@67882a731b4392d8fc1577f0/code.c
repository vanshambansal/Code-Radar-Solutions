#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,count=0;
    scanf("%d",&a);
    while((a&1)!=1){
        count++;
        a=a>>1;
    }
    printf("%d",count);
    return 0;
}