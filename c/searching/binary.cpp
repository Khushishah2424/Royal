#include<stdio.h>
#define SIZE 10

int a[] = {10,20,30,40,50,60,70,80,90,100};

void binarySearch(int search){
    
    int min,max,mid;
    int success = 0;
    min = 0;
    max = SIZE - 1;
    while(min<=max)
    {
        mid = (min + max)/2;
        if(search == a[mid])
        {
            success = 1;
            break;
        }
        else if(search > a[mid]){
            min = max + 1;
        }
        else{
            max = mid - 1;
        }

    }

    success == 1 ? printf("\n%d Found",search) : printf("\n%d Not Found",search);
}
int main(){
    binarySearch(20);
    binarySearch(-10);
}