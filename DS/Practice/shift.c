#include<stdio.h>
#define num 5

int shifting(int shift,int a[]){
    int temp,i;
    while(shift){
        temp = a[0]; // 
        for(i = 0 ; i < num ; i++){
            a[i] = a[i+1];// a[i]=a[1]
        }
        a[num-1] = temp;
        shift--;
    }
    for(i = 0 ; i < num ; i++){
        printf(" %d",a[i]);
    }
}
int main(){
    int a[num],shift,temp,i;
    printf("Enter the %d elements\n",num);
    for(i = 0 ; i < num ; i++){
        scanf("%d",&a[i]);
    }
    for(i = 0 ; i < num ; i++){
        printf("\n%d",a[i]);
    }
    printf("\nhowmany times you want to shift : ");
    scanf("%d",&shift);
    shifting(shift,a);


    



}