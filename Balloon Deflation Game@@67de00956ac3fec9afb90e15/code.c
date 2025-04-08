#include <stdio.h>

void deflateBalloons(int arr[], int n) {
    while (1) {
        int min = -1;
        int count = 0;

        // Find minimum non-zero value
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0 && (min == -1 || arr[i] < min)) {
                min = arr[i];
            }
        }

        // If all values are 0, break the loop
        if (min == -1) {
            break;
        }

        // Subtract min from all positive values and count how many are non-zero
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                arr[i] -= min;
                count++;
            }
        }

        printf("%d\n", count);
    }
}
