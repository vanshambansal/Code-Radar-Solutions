#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n],max,secondmax=-1;
    for (int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    arr[0]=max;
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

    printf("%d",secondmax);

    return 0;
}