#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    int arr1[n];
    for(int i=0;i<count;i++){
        arr[i]==0;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }



    return 0;
}