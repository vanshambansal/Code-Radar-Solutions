#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,b;

    scanf("%d %d",&n,&b);
    printf("%d",n|(1<<b));
    return 0;
}