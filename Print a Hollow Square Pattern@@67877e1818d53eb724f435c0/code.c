#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(i==1&&i==n){
        for (int j =1;j<=n;j++){
            printf("* ");
        }
        }
        else{
            printf(" ");
        }
    }
    return 0;
}