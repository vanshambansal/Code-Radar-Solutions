#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n]
    for(int i=n-1;i>=0;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr1[i]){
            printf("Yes");
        }
    }





    return 0;
}