#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    int num=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%d",num++);
            
        }
        printf("\n");
    }

    return 0;
}