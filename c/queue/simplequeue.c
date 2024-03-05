#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int f = -1;
int r = -1;
int queue[SIZE];

void insert(int num){
    if(r == SIZE - 1){
        printf("\nQ is full");
    }
    else{
        r++;
        queue[r] = num;

        if(f == -1){
            f++;
        }
    }     

}

void display(){
    int i;
    if(f == -1){
        printf("\n Q i empty");
    }
    for(i = f ; i <= r ; i++){
        printf("%d",queue[i]);
    }
    

}

void removeq(){
        printf("\n%d is removed",queue[f]);
        if(f == r){
            f = -1;
            r = -1;
        }
        else{
             f++;
        }
    }


int main(){
    int num,choice;
    while(1){
        printf("\n 1 For insert\n 2 For Display\n 3 For remove");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the num :");
        scanf("%d",&num);
        insert(num);
        break;
    case 2:
        display();
        break;
    case 3:
        removeq();
        break;
    case 0:
        exit(0);

    default:
        break;
    }

    }
    return 0;
}