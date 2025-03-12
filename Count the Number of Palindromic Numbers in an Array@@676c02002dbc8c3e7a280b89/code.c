#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        while(arr[i]!=0){
            sum = sum*10+arr[i]%10;
            arr[i] =arr[i]/10;
        }
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==temp[i]){
            count++;
        }
    }
    printf("%d",count);
    




    return 0;
}