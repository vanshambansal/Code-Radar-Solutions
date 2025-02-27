#include<stdio.h>
int main(){
    int n,max,min;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        max=arr[0];
        min = arr[0];
        if(arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min= arr[i];
        }

    }
    printf("%d %d",max,min);
    return 0;
}