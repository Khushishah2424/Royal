#include<stdio.h>
#define SIZE 10

int partition(int a[],int l,int h){
    int pivot = a[h];
    int i = l;
    int j = l;
    int temp;
    for(j = l ; j < h ; j++){
        if(a[j] < pivot){
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            i++;
        }
    }
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return i;
}

void Quicksort(int a[],int l,int h){
    int mid;
    mid = partition(a,l,h);
    if(l<h){
        Quicksort(a,l,mid-1);
        Quicksort(a,mid+1,h);
    }
}

void display(int a[]){
    int i;
    for(int i = 0 ; i < SIZE ;i++){
        printf(" %d",a[i]);
    }
}
int main(){
    int a[]= {10,9,8,7,6,5,4,3,2,1};
    Quicksort(a,0,SIZE-1);
    display(a);
    return 0;

}