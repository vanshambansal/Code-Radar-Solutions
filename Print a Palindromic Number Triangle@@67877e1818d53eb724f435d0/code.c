#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    int num;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
            printf(" ");
        }
        num=1;
        for(int k=1;k<=2*i-1;k++){
            
            if(k<i){
                printf("%d",num++);
            }
            else{
                printf("%d",num--);
            }
            
        }
        printf("\n");
    }

    return 0;
}