#include<stdio.h>
int main(){

    int n,count=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+1==arr[j]){
                count++;
            }
        }
    }
    printf("%d",count);



    return 0;
}