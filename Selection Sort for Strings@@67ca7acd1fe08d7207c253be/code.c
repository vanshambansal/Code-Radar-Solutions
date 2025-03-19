void selectionSort(char* arr[],int n){
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int k = 0;
            while (arr[i][k] != '\0' && arr[j][k] != '\0' && arr[i][k] == arr[j][k]) { 
                k++;
            }
                if(arr[i][k]>arr[j][k]){
                    char* temp= arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
}

void printArray(char* arr[], int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}










// #include <stdio.h>

// int main() {
//     int num1, num2, sum;
//     int *ptr1, *ptr2;

//     scanf("%d %d", &num1, &num2);

    
//     ptr1 = &num1;
//     ptr2 = &num2;

//     sum = *ptr1 + *ptr2;

    
//     printf("Sum = %d\n", sum);

//     return 0;
// }

