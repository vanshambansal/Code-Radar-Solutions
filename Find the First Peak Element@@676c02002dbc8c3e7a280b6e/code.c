#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
    }
    else if(arr[n-2]<arr[n-1]){
        printf("%d",arr[n-1]);
    }
    else{
        for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
        
    }
    }
    return 0;
}