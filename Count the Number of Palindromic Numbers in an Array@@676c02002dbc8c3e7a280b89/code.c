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
    int count =0;

    for(int i=0;i<n;i++){
        int sum =0;
        while(arr[i]!=0){
            sum = sum*10+arr[i]%10;
            arr[i] =arr[i]/10;
        }
        if(rev==temp[i]){
            count++;
        }
    }
    
    printf("%d",count);
 
    return 0;
}