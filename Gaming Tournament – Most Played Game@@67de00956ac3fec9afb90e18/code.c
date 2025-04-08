int mostPlayedGame(int arr[] ,  int n){
    int maxfrq=-100,mostfreq;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]<arr[j]){
    //             int temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
    // }

    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        if(count>maxfrq){
            maxfrq=count;
            mostfreq=arr[i];
        }
    }
    return mostfreq;    
}