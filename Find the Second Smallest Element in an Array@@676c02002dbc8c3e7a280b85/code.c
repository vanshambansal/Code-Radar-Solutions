#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
     int max= arr[0], max2 = arr[0];
    

    for(int i=1;i<n;i++){
       if(arr[i]>max){
        max=arr[i];
       }

    }
    for(int i=1;i<n;i++){
        if(max2<max && max2>arr[i]){
            max2=arr[i];
        }
    }
    if(max2){
        printf("%d",max2);
    }
    else{
        printf("-1");
    }
    

    return 0;
}