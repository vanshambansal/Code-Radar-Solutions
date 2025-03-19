void selectionSort(char* arr[],int n){
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i][0]>arr[j][0]){
                    char temp= arr[i][0];
                    char arr[i][0] = arr[j][0];
                    char arr[j][0] = temp;
                }
            }
        }
}

void printArray(char* arr[n],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}
