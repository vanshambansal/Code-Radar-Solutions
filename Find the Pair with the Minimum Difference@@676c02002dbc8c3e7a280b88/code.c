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
            if((arr[i]-arr[j])<min){
                 if(min<0){
                    min=min*(-1);
                }
                min = arr[i]-arr[j];
               
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]-arr[j])==min){
                printf("%d %d",arr[j],arr[i]);
            }
        }
    }

    return 0;
}