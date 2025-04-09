void  trackScores(int arr[] , int n , int result[]){

    int max = arr[0];
    int min = arr[0];
    int minc = 0, maxc = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            maxc++;
        }
        if(arr[i]<min){
            min = arr[i];
            minc++;
        }
    }
    result[0] = maxc;
    result[1] = minc;

}