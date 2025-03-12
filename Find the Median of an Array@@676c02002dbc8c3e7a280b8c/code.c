#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(n%2!=0){
            printf("%d",(n/2)+1);
            break;
        }
        else{
            printf("%d",((n/2)+((n/2)+1))/2);
            break;
        }

    }

    return 0;
}