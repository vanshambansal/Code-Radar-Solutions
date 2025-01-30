#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n:
    scanf("%d",&n);
    int count=0;
    for (int i=31;i>=0;i--){
        if(n&(1<<i)){
            break;
        }
        count++;
        
    }
    printf("%d",count);

    return 0;
}