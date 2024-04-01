#include<stdio.h>
#define SIZE 10

int a[] = {34,5,355,40,6,7,89,100,569,10};

void display(){
    for(int i = 0 ; i < SIZE ; i++){
        printf(" %d",a[i]);
    }
}

void Selectionsort(){
    int i,j,min,temp;
    for(i = 0 ; i < SIZE ; i++){
        for(j = i+1,min=i;j < SIZE ;j++){
            if(a[min]>a[j]){
                min = j;
            }
        }   
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
    }

}

int main(){
    printf("\nbefore the selection of Array");
    display();
    Selectionsort();
    printf("\nAfter the selection of  Array");
    display();
}