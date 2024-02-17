// 2. Reverse an Array
// Problem Statement: Write a function that takes an array as input and returns a new array that is the reverse of the input array.

// Example:

// Input: [1, 2, 3, 4, 5]

// Output: [5, 4, 3, 2, 1]


#include<stdio.h>
#define n  5
int main(){
    int a[n],temp;
    printf("Enter 5 integers :\n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    // 1 2 3 4 5 
    for(int i = 0 ; i < n/2; i++){
        temp = a[i]; 
        a[i]= a[n - i - 1]; 
        a[n - i - 1] = temp;
    } printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

