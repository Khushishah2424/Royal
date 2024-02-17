// Check if an Array is Sorted: Write a program to check if an array is sorted in ascending order.

#include<stdio.h>
#define n 5
int main(){
    int a[n], i ;
    int issorted = 1;
    printf("Enter integers : \n");
    for(i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }

    for(i = 0 ; i < n - 1; i++){
        if(a[i] >  a[i+1]){
           issorted = 0;
           break;
        }
    }
    if(issorted){
        printf("Ascending");
    }
    else{
        printf("Not Ascending");

    }

    return 0;
}