
// Input: nums = [1,5,0,3,5]
// Output: 3
// Explanation:
// In the first operation, choose x = 1. Now, nums = [0,4,0,2,4].
// In the second operation, choose x = 2. Now, nums = [0,2,0,0,2].
// In the third operation, choose x = 2. Now, nums = [0,0,0,0,0].


// Input: nums = [1,5,0,3,5] { when u subtract u have to subtract with all but not if its zero }

// 1 5 0 3 5 
// -1 .
// 0 4 0 2 4 
// -2 
// 0 2 0 0 2 
// -2 
// 0 0 0 0  0
#include<stdio.h>

int main(){
    int SIZE ;
    printf("Enter SIZE :");
    scanf("%d",&SIZE);

    int a[SIZE];
    for(int i = 0 ; i < SIZE ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < SIZE ; i++){
        printf("%d",a[i]);
    }

    int min = a[0]; //1
    for(int i = 0 ; i < SIZE ; i++){
        if(a[i] == 0){
            continue;
        }
        if(min == 0 || min>a[i]){
            min = a[i];
        }
    }
    printf("\nmin = %d",min);
}

