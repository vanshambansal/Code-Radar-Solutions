#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    int temp[k];
    for (int i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for (int i=1;i<=n-k;i++){
        arr[i]=arr[k+i];
    }
    for(int i=1;i<=k;i++){
        arr[i]=temp[k];
    }
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }





    return 0;
}