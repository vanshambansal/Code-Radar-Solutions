int findKthMissing(int arr[], int n,int k){
    int smallest=0;
    for(int i=0;i<n;i++){
        if(arr[i]==smallest){
        smallest++;
        }
    }
    return smallest;
}