#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && (arr[i]+arr[j])==k){
                printf("%d %d\n",arr[i],arr[j]);
                return 0;
            }
            else if((arr[i]+arr[j])==k){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }

    return 0;
}