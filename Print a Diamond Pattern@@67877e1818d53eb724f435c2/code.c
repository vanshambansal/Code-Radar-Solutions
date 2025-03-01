#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for (int j=n;j>i;j--){
//             printf(" ");
//         }
//         for (int k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int x=1;x<=n-1;x++){
//         for(int y=1;y<=x;y++){
//             printf(" ");
//         }
//         for(int z =1;z<=2*(n-x)-1;z++){
//             printf("*");
//         }

//         printf("\n");
//     }
//     return 0;
// }





int main(){

    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=n-1;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }








    return 0;
}