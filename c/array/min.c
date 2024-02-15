#include<stdio.h>
int main(){
    int a[5];
    int min;
    printf("Enter the NUm :");
    for(int i = 0 ; i< 5;i++){
        scanf("%d",&a[i]);
    }
 
    min = a[0];
    for(int i = 0 ; i< 5; i++){
        if(a[i] == 0){
            continue;
        }
        if( min == 0 ||min>a[i]){
            min = a[i];
        }

    }
    printf("%d",min);

}