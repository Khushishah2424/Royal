#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head = NULL,*last = NULL;

void addnote(int num){
    struct node *tmp = NULL;
    if(head == NULL){
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else{
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        tmp->prev = last;
        last->next = tmp;
        last = tmp;
    }
}

void display(){
    struct node *p;
    if(head == NULL){
        printf("list is empty");
    }else{
        p = head;
        // printf("\n");
        while(p != NULL){
            printf("%d ",p->data);
            p = p->next;
        }
    }
}

void reverse(){
    struct node *p;
    if(head == NULL){
        printf("list is empty");
    }else{
        p = last;
        printf("\n");
        while(p != NULL){
            printf("%d ",p->data);
            p = p->prev;
        }
    }
}
void addbeg(int num){
    struct node *temp;
    if(head == NULL){
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        head->prev = NULL;
        last = head;
        // addnote(num);
    }else{
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    }

}

void addatanyafter(int key,int num){
    struct node *p = head;
    struct node *temp = NULL;
    while(p!= NULL){
        if(p->data == key){
            break;
        }
        p = p->next;
    }
    if(p == NULL){
        printf("Invalid key");
    }
    else{
         temp = malloc(sizeof(struct node));
         temp->data = num;
         temp->next = p->next;
         temp->prev = p;
         p->next = temp;
         temp->next->prev = temp;
        //p->next->next->prev = p;
        //temp->next->prev = temp;
    }

}

int main(){
    addnote(10);
    addnote(20);
    addnote(30);
    addbeg(40);
   addatanyafter(20,35);
    int choice;
    printf("\n1..Simple display");
    printf("\n2.Reverse Display");
    printf("\nenter your choice : ");
   scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        display();
       break;
    case 2:
        reverse();
        break;
    default:
        break;
    }
    

}

