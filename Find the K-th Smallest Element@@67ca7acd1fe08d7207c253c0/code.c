#include<stdio.h>
int kthSmallest(int arr[] ,  int n , int k){
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int result = arr[k-1];
    return result;
}