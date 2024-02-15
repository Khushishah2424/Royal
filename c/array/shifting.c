#include<stdio.h>
int main(){
    int a[5];
    printf("Enter the 5 integers: \n");
    for(int i = 0 ;i < 5 ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ;i < 5 ; i++){
        int temp = a[0];   
         for(int i = 0 ;i < 4 ; i++){
            a[i] = a[i] + 1;
        }
    }
}

// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int temp;

//     // Repeat the shift operation 3 times for a 3-position shift

//     for (int shift = 0; shift < 3; shift++) {
//         temp = arr[0];//10
//         for (int i = 0; i < size - 1; i++) {// 20
//             arr[i] = arr[i + 1];   
//         }
//         arr[size - 1] = temp;
//     }

//     for (int i = 0; i < size; i++) {
//         printf("%d  ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
