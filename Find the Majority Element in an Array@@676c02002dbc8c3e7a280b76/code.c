#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n],visited[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    int maxfreq=0,mostfreqelement=-1;

    for(int i=0;i<n;i++){
        if(visited[i]==1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            mostfreqelement=arr[i];
        }

    }
   if(maxfreq > (n/2)){
        printf("%d",mostfreqelement);
      }
    else{
        printf("-1");
    }
    return 0;
}