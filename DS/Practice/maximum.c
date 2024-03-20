// 1. Find the Maximum Element in an Array
// Problem Statement: Given an array of integers, write a function to find and return the maximum element in the array.

// Example:

// Input: [1, 3, 5, 7, 9]

// Output: 9

// #include<stdio.h>
// int main(){
//     int a[5];
//     int max;
//     printf("Enter 5 integers :\n");
//     for(int i = 0 ; i < 5 ; i++){
//         scanf("%d",&a[i]);
//     }
//     max = a[0];
//     for(int i = 1 ; i < 5 ; i++){
//         if(max<a[i]){
//             max = a[i];
//         }
//     }
//     printf("max = %d",max);
// }

#include<stdio.h>
int findmax(int a[]){
    int max = a[0];
    for(int i = 0 ; i < 5 ; i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    return max;
} 

int main(){
    int a[5];
    int max;
    printf("Enter 5 integers :\n");
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d",&a[i]);
    }

    int ans = findmax(a);
    printf("%d",ans);

}

