#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int num = a&(1<<(b*8-1));
    printf("%d",num)
    return 0;
}