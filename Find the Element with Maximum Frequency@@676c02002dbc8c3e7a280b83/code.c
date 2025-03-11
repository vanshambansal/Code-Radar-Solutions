#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        arr1[i]=count;
    }
    int max= arr1[0];
    for(int i=1;i<n;i++){
        if(arr1[i]>max){
            max = arr1[i];
        }
    }
    
    printf("%d",max);

    return 0;
}