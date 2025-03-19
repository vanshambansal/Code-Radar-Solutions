void selectionSort(int arr[n] ,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                static temp;
                temp=i;
                i=j;
                j=temp;
            }
        }
    }
}
void printArray(int arr ,int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}