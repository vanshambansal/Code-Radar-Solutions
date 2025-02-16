#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a , num;
    scanf("%d",&a);
    num= a&(1<<(sizeof(a)*8-1));
    if(num!=0){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}