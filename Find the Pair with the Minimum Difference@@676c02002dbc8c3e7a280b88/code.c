#include<stdio.h>
int main(){
    int n,min=10000,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1 ; j<n;j++){
            int diff  = arr[i]-arr[j];
            if(diff<0){
                    diff = -diff;
                }
            if(diff < min){
                
                min = diff;  
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff  = arr[i]-arr[j];
            if(diff<0){
                    diff = -diff;
                }
            if(diff == min){
                printf("%d %d",arr[i],arr[j]);
                break;
            }
        }
    }

    return 0;
}