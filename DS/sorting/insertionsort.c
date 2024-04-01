#include<stdio.h>
#define SIZE 10
 
int a[] = {30,65,70,8,4,90,56,7,823,40};
void display(){
    int i;
    for(int i = 0 ; i < SIZE ; i++){
        printf(" %d",a[i]);
    }
}

void insertionsort(){
    int i,j,temp;
    for(int i = 1 ; i < SIZE ; i++){
        temp = a[i];
        for(j = i-1 ; j >= 0 ; j--){
           if(temp < a[j]){
                a[j+1] = a[j];
           }
           else{
                 break;
           }
        }
        a[j+1] = temp;

    }
}

int main(){
    printf("Before sorting");
    display();
    printf("\nAfter sorting");
    insertionsort();
    display();

}