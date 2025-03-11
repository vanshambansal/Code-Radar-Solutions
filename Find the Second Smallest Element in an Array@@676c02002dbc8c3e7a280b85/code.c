#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
     int min = arr[0], min2 = 1000000;
    

    for(int i=0;i<n;i++){
       if(arr[i]<min){
        min=arr[i];
       }

    }
    for(int i=1;i<n;i++){
        if(arr[i]>min && arr[i]<min2){
            min2=arr[i];
        }
    }
    if(min2==1000000){
        printf("-1");
    }
    else{
        printf("%d",min2);

    }
    return 0;
}