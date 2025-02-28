#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[n];
    int freqindex = 0;
    for(int i=0;i<n;i++){
            int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                
            }

        }
        freq[freqindex] = count;
        freqindex++;
    

    int max = arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }

    }
    printf("%d",max);

    }




    return 0;
}