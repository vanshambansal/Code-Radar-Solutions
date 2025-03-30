int searchInRotatedArray(int arr[],int n , int target){
    int found =0;
    for(int i=0;i<n;i++){
        int search =0;
        if(arr[i]==target){
            search=1;
            found =1
        }
        if(search){
            return i;
        }
    }
    if(!found){
        return -1;
    }

}