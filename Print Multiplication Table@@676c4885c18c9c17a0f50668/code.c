#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i=1;
    scanf("%d",&n);
    while(i<=10){
        printf("%d x %d = %d\n",n,i,n*i);
        ++i;
    }
    return 0;
}