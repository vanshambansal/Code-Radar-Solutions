#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxright=-1;
    for(int i= n-1;i>=0;i--){
        int temp = arr[i];
        arr[i]=maxright;
        if(temp > maxright){
            maxright=temp;
        }
    }   
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}



// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         scanf("%d ", &arr[i]);
//     }
//     for(int i = 0; i < n - 1; i++) {
//         int  max = arr[i + 1];
//         for(int j = i + 1; j < n; j++) {
//             if(arr[j] > max) max = arr[j];
//         }
//         arr[i] = max;
//     }
//     arr[n - 1] = -1;
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }