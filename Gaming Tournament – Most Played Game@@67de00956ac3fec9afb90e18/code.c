int mostPlayedGame(int arr[] ,  int n){
    int count = 0,maxfrq=-100,mostfreq;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
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