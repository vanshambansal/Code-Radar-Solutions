#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flaginc =1,flagdec=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                flaginc=0;
            }
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flagdec=0;
            }
           
        }
    }
    if(flaginc || flagdec){
        printf("YES");
    }else{
        printf("NO");
    }



    return 0;
}