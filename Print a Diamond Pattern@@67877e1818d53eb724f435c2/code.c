#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=n;j>i;j--){
            printf(" ");
        }
        for (int k=1;i<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int x=1;x<=n-1;x++){
        for(int y=1;y<=x){
            printf(" ");
        }
        for(int z =n;z<=2*x-1){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}