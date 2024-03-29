#include<stdio.h>
#define SIZE 10

int a[] = {54,67,34,78,90,23,45,1,37,5};

void bubbleSort(){
    int i,j,temp;
    for(i = 0 ; i < SIZE ; i++){
        for(j = 0 ; j < SIZE - 1 ; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nSorted array");
    for(i = 0 ; i < SIZE ; i++){
        printf(" %d",a[i]);
    }
}
int main(){
    bubbleSort();
}
