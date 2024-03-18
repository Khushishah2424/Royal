#include<stdio.h>
#define SIZE 10

int a[] = {3,40,56,34,67,89,100,300,10,5};
void linearSearch(int key){
    int flag = 0;
    for(int i = 0 ; i < SIZE ;i++){
        if(a[i] == key){
            flag = 1;
            printf("%d Found",key);
        }
    }
    if(flag == 0){
        printf("%d Not Found",key);
    }

}

int main(){
    int num;
    printf("Enter num you want to search :");
    scanf("%d",&num);
    linearSearch(num);
}

