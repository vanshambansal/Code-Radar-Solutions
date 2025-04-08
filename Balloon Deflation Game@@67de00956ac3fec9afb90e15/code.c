#include<stdio.h>
void deflateBalloons(int arr[],int n){
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[i]=temp;
            }
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[j]>0){
                count ++;
                int min= arr[i] - arr[k];
                arr[i]-=min;

            }

        }
        printf("%d\n",count);
        k++;
    }


}