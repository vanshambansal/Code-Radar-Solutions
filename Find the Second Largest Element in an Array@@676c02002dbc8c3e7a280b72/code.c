#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n],max,secondmax= arr[0];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
        return 0;
    }
    max=arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] >secondmax && arr[i]<max){
            secondmax=arr[i];
        }
        
    }

    if(secondmax == -1){
        printf("-1");
    }
    else {
        printf("%d",secondmax);
    }

    

    return 0;
}