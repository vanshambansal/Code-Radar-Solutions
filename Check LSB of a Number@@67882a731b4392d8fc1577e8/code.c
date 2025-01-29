#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int num = a&1;
    if(num==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}