#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        for(int j=0;j<i;j++){
            printf("* ");
            return 0;
        }
        printf("\n");
    }
    return 0;
}