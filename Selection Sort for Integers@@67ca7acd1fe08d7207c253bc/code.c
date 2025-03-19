void selectionSort(int arr[] ,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=i;
                i=j;
                j=temp;
            }
        }
    }
}
void printArray(int arr[] ,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}