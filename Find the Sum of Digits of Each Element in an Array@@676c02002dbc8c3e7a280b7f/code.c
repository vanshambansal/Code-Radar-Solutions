#include<stdio.h>
int main(){
    int n,sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum1[n];
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=-1*arr[i];
        }
        while(arr[i]!=0){
        sum =sum +arr[i]%10;
        arr[i]= arr[i]/10;
        }
        sum1[i]=sum;
        printf("%d ",sum1[i]);
        sum=0;
    }
    


    return 0;
}