#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    int num=1;
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        num=(mum%2==0)?1:0;
        for (int j=1;j<=i;j++){
            printf("%d ",num);
            num=(num==1)?0:1;

        }printf("\n");
    }
    return 0;
}