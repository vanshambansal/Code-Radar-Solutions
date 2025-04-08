void deflateBalloons(int arr[], int n) {
        int min = 1e9;
        int count = 0;

        // Find minimum positive air level
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0 && arr[i] < min) {
                min = arr[i];
            }
        }

        // If all balloons are deflated, break
        if (min == 1e9)
            break;

        // Deflate all with min air
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                arr[i] -= min;
                count++;
            }
        }

        printf("%d\n", count);
    }

