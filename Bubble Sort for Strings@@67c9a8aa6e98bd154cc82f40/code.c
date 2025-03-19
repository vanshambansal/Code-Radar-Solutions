void bubbleSort(char* arr[],int n){

    for(int i=0;i<n;i++){
        int k=0;
            if(arr[i][k]==arr[j][k]){
                k++;
            }
        for(int j=i+1;j<n;j++){
            
            if(arr[i][k] > arr[j][k]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}
void printArray(char* arr[] ,int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}