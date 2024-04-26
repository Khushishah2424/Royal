#include<stdio.h>
#include <stdlib.h>
int main(){
    int *p,sum = 0;
    p = calloc(sizeof(int),5);
    printf("Enter value\n");
    for(int i = 0 ; i < 5 ; i++){
        scanf("\n%d",&p[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        sum += p[i];
    }
    printf("Sum = %d",sum);
}