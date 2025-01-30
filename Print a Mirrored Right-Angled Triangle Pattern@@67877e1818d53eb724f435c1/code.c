#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=n-1;i>0;i--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}