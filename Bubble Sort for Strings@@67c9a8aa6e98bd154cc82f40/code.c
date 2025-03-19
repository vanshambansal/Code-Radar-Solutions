#include <stdio.h>
#include <string.h> // Include string.h for strcmp()

void bubbleSort(char* arr[], int n) {
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) {  
            if (strcmp(arr[j], arr[j + 1]) > 0) {  // Compare full strings
                char* temp = arr[j];  
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(char* arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
