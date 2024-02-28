#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

void push(int num){
    if(top == SIZE - 1){
        printf("\nStack OverFlow");
    }
    else{
        top++;
        stack[top] = num;
    }
}

void pop(){
    int temp;
    if(top == -1){
        printf("\nStack UnderFlow\n");
    }
    else{
        temp = stack[top];
        top--;
    }
}

void display()
{
    if(top == -1){
         printf("\nStack Empty\n");
    }
    else{
        for(int i = top ; i >= 0 ; i--)
        printf("\n%d",stack[i]);
    }
}


int main(){
    int num , choice;
    while(1){
        printf("\n1 For push\n2 For pop\n3 For display\n4 For exit");
        printf("\nEnter your Choice :\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the num:\n");
            scanf("%d",&num);
            push(num);
            break;
        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);
            break;

    
        
        default:
            printf("\nINVLAID CHOICE");
            break;
        }
    }

}