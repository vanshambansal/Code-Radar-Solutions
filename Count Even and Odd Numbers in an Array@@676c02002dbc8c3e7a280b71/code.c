#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],n1,n2;

    for (int i=0;i<n;i++){
        scanf("%d",&arr[n]);

    }
    for (int i=0;i<n;i++){
        if((arr[i]%2)==0){
            n1++;
        }
        else{
            n2++;
        }
    }
    printf("%d %d",n1,n2);
}