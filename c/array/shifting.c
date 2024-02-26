#include<stdio.h>
#define n 5
int main(){
    int a[n],i,temp,shift;
    printf("Enter the %d integers: \n",n);
    for(i = 0 ;i < n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter howmany times you want to shift arrya :");
    scanf("%d",&shift);
    
     
    while(shift)
    {
        temp = a[0];
         for( i = 0 ;i < n ; i++){
            a[i]=a[i+1];
         }
            a[n-1]=temp;  
            shift--;  
    }
    
    for( i = 0 ;i < n ; i++){
        printf(" %d ",a[i]);
    }
    return 0;

}

// #include<stdio.h>
// #define n 5
// int main(){
//     int a[n],i,temp,shift;
//     printf("Enter the %d integers: \n",n);
//     for(i = 0 ;i < n ; i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter howmany times you want to shift arrya :",shift);
//     scanf("%d",&shift);
//     while(shift)
//     { 
//         temp = a[n-1];//5
//          for( i = n-1 ;i > 0  ; i--){//
//             a[i]=a[i-1];//

//          }
//             a[0]=temp;
//             shift--;  
//     }
    
//     for( i = 0 ;i < n ; i++){
//         printf(" %d ",a[i]);
//     }

// }





