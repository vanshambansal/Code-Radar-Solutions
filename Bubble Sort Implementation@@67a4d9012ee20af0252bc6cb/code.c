void bubbleSort(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void printArray(int arr[] , int n){

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}