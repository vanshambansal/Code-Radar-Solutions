void deflateBalloons(int arr[], int n) {
    while(1){

        int min=-1;
        int count =0;
        for(int i=0;i<n;i++){
            if(arr[i] > 0 && (min == -1 || arr[i] < min)){
                min=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                arr[i]-=min;
                count++;

            }

        }
        if(count == 0) {
            break;
        }
        printf("%d\n",count);
        

    }
}
