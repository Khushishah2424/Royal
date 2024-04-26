#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int *b;
    int *sum;
    a = alloca(sizeof(int));
    b = alloca(sizeof(int));
    sum = alloca(sizeof(int));
    printf("Enter 1st num : ");
    scanf("%d",a);
    printf("Enter 2nd num : ");
    scanf("%d",b);
    *sum = *a + *b;
    printf("Sum = %d",*sum);

}