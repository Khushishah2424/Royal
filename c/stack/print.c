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
        // temp = stack[top];
        printf("pop = %d",stack[top]);
        top--;
    }
}

int peek(){
    return stack[top];
}

void peep(int location){
    int index = top - location + 1;
    if(index >=0 && index <= top){
        printf("%d",stack[index]);
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
    int num , choice , a;
    while(1){
        printf("\n1 For push\n2 For pop\n3 For Peek\n4 For peep\n5 For display\n5 For exit");
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
            printf("Top of stack %d",stack[top]);
            break;

        case 4:
            printf("\nEnter the num for peep : ");
            scanf("%d",&a);
            peep(a);
            break;

        case 5:
            display();
            break;

        case 6:
            exit(1);
            break;

        default:
            printf("\nINVLAID CHOICE");
            break;
        }
    }

}
