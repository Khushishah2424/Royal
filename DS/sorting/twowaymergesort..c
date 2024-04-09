#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
#define SIZE3 SIZE1 + SIZE2

int a[] = {10,20,30,40,50};
int b[] = {5,15,25,45,100};
int c[SIZE3];

int merge(){
    int i,j,k;
    for(i = 0 , j = 0 , k = 0 ; i < SIZE1 && j < SIZE2 ;k++){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
    }

    while(i<SIZE1){
        c[k++] = a[i++];
    }
    while(j<SIZE2){
        c[k++] = b[j++];
    }
}

void Display(){
    for(int k = 0 ; k < SIZE3 ; k++){
        printf(" %d",c[k]);
    }
}
int main(){
    merge();
    // for(int i = 0 ; i < SIZE3 ;i++){
    //     printf(" %d",c[i]);
    // }
    Display();
}
