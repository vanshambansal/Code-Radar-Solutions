// #include<stdio.h>
// int main(){
//     int n,min=10000,a,b;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1 ; j<n;j++){
//             int diff  = arr[i]-arr[j];
//             if(diff<0){
//                     diff = -diff;
//                 }
//             if(diff < min){
                
//                 min = diff;  
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int diff  = arr[i]-arr[j];
//             if(diff<0){
//                     diff = -diff;
//                 }
//             if(diff == min){
//                 if(arr[i]>arr[j]){
//                     printf("%d %d",arr[j],arr[i]);
//                 }
//                 else{
//                     printf("%d %d",arr[i],arr[j]);
//                 }
                
//                return 0;
//             }
//         }
//     }

//     return 0;
// }




#include <stdio.h>
#include <limits.h>  // For INT_MAX

int main() {
    int n, min = INT_MAX, a, b;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding the smallest absolute difference
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = arr[i] - arr[j];

            if (diff < 0) { // Convert negative difference to positive
                diff = -diff;
            }

            if (diff < min) { // Update min difference
                min = diff;
                a = arr[i];
                b = arr[j];
            }
        }
    }

    // Printing the first pair with the smallest difference
    if (a > b) {  // ✅ Ensure smaller number comes first
        printf("%d %d\n", b, a);
    } else {
        printf("%d %d\n", a, b);
    }

    return 0;
}
