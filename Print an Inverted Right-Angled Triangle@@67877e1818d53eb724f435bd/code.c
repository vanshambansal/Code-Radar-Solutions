#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for (int i=a;i>=1;i++){
        for(int j=0;j<i;j++){
            printf('*');
        }
        printf("\n");
    }
    return 0;
}