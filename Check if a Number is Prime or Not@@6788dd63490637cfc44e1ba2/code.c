#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(int i=2;i*i<=a;i++){
        if (a%i==0){
            printf("Not Prime");
            break
        }
    }printf("Prime");
    return 0;
}