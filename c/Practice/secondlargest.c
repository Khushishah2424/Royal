#include<stdio.h>
#define n 5
int main(){
    int i,a[n],max,secondmax;
    printf("Enter integers : \n");
    for(i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
     
    if(a[0] > a[1]){
        max = a[0];
        secondmax = a[1];
    }
    else{
        max = a[1];
        secondmax = a[0];
    }

    for(i = 2 ; i < n ; i++){
        if(a[i] > max){
            secondmax = max;
            max = a[i];
        }
        else if(a[i] > secondmax && a[i]!= max){
            secondmax = a[i];\
        }
    }
    printf("%d",secondmax);



}


