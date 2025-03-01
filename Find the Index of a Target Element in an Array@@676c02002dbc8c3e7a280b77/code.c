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
             break;
        }
       
    }
    



    return 0;
}