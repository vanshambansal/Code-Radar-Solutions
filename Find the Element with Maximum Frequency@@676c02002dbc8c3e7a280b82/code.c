#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxfreq=-1,mostfreq;
    for(int i=0;i<n;i++){
        int count =0
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>maxfreq){
                maxfreq=count;
                mostfreq=arr[i];
            }
        }
    }
    printf("%d",mostfreq);
    


    return 0;
}