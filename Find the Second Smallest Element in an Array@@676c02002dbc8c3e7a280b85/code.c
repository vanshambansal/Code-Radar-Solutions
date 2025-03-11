#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
     int min = arr[0], min2 = arr[0];
    

    for(int i=1;i<n;i++){
       if(arr[i]<min){
        min=arr[i];
       }

    }
    for(int i=1;i<n;i++){
        if(min2>min && min2<arr[i]){
            min2=arr[i];
        }
    }
    
        printf("%d",min2);
    return 0;
}