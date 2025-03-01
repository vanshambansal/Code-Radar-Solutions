#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        for(int j=n-1;j>n/2;j--){
            if(arr[i]== arr[j])
            printf("Yes");
            else{
                printf("No");
            }
        }
    }





    return 0;
}