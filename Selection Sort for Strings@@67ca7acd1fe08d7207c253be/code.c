void selectionSort(char* arr[],int n){
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i][0]>arr[j][0]){
                    temp temp= arr[i][0];
                    temp arr[i][0] = arr[j][0];
                    temp arr[j][0] = temp;
                }
            }
        }
}

void printArray(char* arr[n],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
