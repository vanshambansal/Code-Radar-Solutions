#include<stdio.h>
int main(){

    int n,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<n;i++){
        if(arr[i]==b){
            printf("%d",i);
             return 0;;
        }   
    }
    printf("-1");
    



    return 0;
}