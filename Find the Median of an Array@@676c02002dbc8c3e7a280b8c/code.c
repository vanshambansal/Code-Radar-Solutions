#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
        if(n%2!=0){
            printf("%d",arr[((n/2)+1)-1]);
           
        }
        else{
            printf("%d",arr[(((n/2)+((n/2)+1))/2)]);
            
        }

    

    return 0;
}