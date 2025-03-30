#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ", arr[i])
        if(arr[i-1]>arr[i]){
            printf("%d ", arr[i-1]);
        }
        else{
            arr[i-1]=arr[i];
        }
    }


    return 0;
}