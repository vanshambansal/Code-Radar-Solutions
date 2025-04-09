void trackPlayerRanks(int ranked[] , int n , int played[] , int m , int result[]){

    for(int i=0;i<m;i++){
        int count =0;
        int max
        for(int j=0 ; j<n ; j++){
            if(played[i]<ranked[j]){
                count ++;
            }
        }
        result[i]=count-1;
    }

}