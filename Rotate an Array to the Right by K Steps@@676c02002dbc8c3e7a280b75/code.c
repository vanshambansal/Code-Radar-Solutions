#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&k);
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    
    for(int i=n-1; i>=k; i--){
        arr[i+k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }


    return 0;
}