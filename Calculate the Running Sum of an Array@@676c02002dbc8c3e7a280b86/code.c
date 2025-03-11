#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n],sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        arr1[i]= sum; 
    }
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }



    return 0;
}