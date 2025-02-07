#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,num=0;
    scanf("%d",&a);
    for(int i=31;i>=0;i--){
        if(a&(1<<i)){
            num=num*10+1;
        }
        else{
            num=num*10;
        }
    }
    printf("%d",num);

    return 0;
}