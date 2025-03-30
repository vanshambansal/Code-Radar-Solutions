int binarySearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        int found =0 ;
        if(arr[i]==target){
            found=1;
        }
        if(found){
            return i;
        }
    }
    if(!found){
            return -1;
        }
}