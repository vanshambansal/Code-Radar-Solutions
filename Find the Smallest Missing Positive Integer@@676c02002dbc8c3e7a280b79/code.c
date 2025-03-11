#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i]>=0 && arr[i-1]>=0){
            if(arr[0]>1){
                printf("1");
                break;
            }
            else if(arr[i]-arr[i-1]!=1){
               printf("%d", arr[i-1]+1);
               break;
            }
            else{
                printf("%d",arr[n-1]+1);
                break;
            }
            }
            else{
                printf("1");
                break;
            }
        }
       
    

    return 0;
}