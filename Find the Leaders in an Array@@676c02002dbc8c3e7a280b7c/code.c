#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int index =0;

    int maxRight = arr[n - 1];  
    arr[index++] = maxRight;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            arr[index++]=maxRight;
        }
    }
    for(int i=index-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
