#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    count=0;
    while((1&n)==0){
        count++;
        n=n>>1;
    }
    printf("%d",count;)
    return 0;
}