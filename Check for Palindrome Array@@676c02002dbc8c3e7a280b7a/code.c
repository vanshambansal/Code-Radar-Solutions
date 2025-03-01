#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
        for(int i=0;i<n;i++){
        arr1[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=arr1[i]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
            


    return 0;
}