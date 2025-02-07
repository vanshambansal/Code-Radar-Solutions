#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(int i=31;i>=0;i--){
        if(a&(1<<i)){
            printf("1");
        }
        else{
            printf("0");
        }
    }

    return 0;
}