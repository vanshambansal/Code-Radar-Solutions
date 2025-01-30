#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(let i=0;i<a;i++){
        for(let j=0;j<a;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}