#include<stdio.h>
#include<stdlib.h>

int main(){
    int *a;
    a = alloca(sizeof(int));
    printf("Enter the num :");
    scanf("%d",a);
    printf("Number = %d",*a);
    return 0;

}