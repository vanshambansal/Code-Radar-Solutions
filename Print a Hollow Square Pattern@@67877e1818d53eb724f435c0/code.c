#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i==1&&i==n){
            printf("* ");
        }
        else{
            printf(" ");
        }
    }
    return 0;
}