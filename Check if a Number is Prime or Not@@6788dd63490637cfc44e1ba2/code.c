#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if (a%i==0){
            printf("Not Prime");
            return 0;
        }
    }printf("Prime");
    return 0;
}