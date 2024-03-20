// 3. Check if an Array is Palindromic
// Problem Statement: Determine whether an array is a palindrome. An array is a palindrome if it reads the same backward as forward.

// Example:

// Input: [1, 2, 3, 2, 1]`  
// Output: True

#include<stdio.h>
#define n 5
int main(){
    int a[n], i, count = 0;
    printf("Enter 5 intergers : \n");
    for( i = 0 ;i < n ;i++){
        scanf("%d",&a[i]);
    }
    for( i = 0 ;i < n/2 ;i++){
        if(a[i] == a[(n-1)-i]){
            count++;
        }
    }
    if(count == n/2){
        printf("is palindrome");
    }
    else{
        printf("not palindrome");

    }
}