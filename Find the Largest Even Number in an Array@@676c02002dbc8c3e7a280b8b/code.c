#include<stdio.h>
int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            max= -100;
            if(arr[i]>max){
                max=arr[i];
            }
        }
    }
    printf("%d",max);
  

    return 0;
}