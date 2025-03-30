#include <stdio.h>
#include <string.h>

void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (arr[i][k] == arr[j][k]) { 
                k++;
            }
            if (strcmp(arr[i], arr[j]) > 0) { 
                char temp[100];
                strcpy(temp, arr[i]);  
                strcpy(arr[i], arr[j]); 
                strcpy(arr[j], temp);
            }
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}