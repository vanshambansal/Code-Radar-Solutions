#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n],max;
    for (int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    arr[0]=max;
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max[]=arr[i];
        }
    }
    printf("%d",max[1]);




    return 0;
}