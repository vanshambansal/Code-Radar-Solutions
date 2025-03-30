int findOccurrence(int arr[],int n, int target, char mode){
    int found =0;
    if(mode=='F'){
        for(int i=0;i<n;i++){
            int mintarget =0
            if(arr[i]==target){
                mintarget =i;
                found=1;
                break;
            }
            if(mintarget){
                return mintarget;
            }

        }
    }else{
         for(int i=n-1;i>=0;i--){
            int mintarget =0
            if(arr[i]==target){
                mintarget =i;
                found=1;
                break;
            }
            if(mintarget){
                return mintarget;
            }

        }
    }
    if(!found){
        return -1;
    }

}