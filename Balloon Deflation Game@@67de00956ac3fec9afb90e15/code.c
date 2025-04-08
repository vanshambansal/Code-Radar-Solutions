void deflateBalloons(int arr[], int n) {
    while(1){

        int min=1000000;
        int count =0;
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                count++;
                arr[i]-=min;
            }

        }

        printf("%d",count);



    }
}
