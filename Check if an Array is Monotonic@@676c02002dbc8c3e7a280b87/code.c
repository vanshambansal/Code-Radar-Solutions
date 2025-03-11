#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                flag=1;
            }
            else{
                flag=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                flag=1;
            }
            else{
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("YES");
    }else{
        printf("NO")
    }



    return 0;
}