#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int *b;
    int *c;
    a = alloca(sizeof(int));
    b = alloca(sizeof(int));
    c = alloca(sizeof(int));
    printf("Enter 1st num : ");
    scanf("%d",a);
    printf("Enter 2nd num : ");
    scanf("%d",b);
    printf("Enter 3rd num : ");
    scanf("%d",c);
    if(*a > *b){
        if(*a > *c){
            printf("max = %d",*a);
        }
        else{
            printf("max = %d",*c);
        }
    }
   else{
        if(*b > *c){
            printf("max = %d",*b);
        }
        else{
            printf("max = %d",*c);
        }
   }
}