#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){ 
        for (int j =0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    return 0;
}