#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    int sum =0;
    for(int i=0;i<n;i++){
        while(arr[i]!=0){
            sum = sum*10+arr[i]%10;
            arr[i] =arr[i]/10;
        }
        arr1[i] = arr[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr1[i]){
            count++;
        }
    }
    printf("%d",count);
    




    return 0;
}