#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1];
    for(int i= n-1;i>=0;i--){
        if(arr[i]>arr[i-1]){
            arr[i-1]=arr[i];
            arr[n-1]=-1;
        }
    }   
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}