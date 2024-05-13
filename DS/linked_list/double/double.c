#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head = NULL,*last = NULL;

void addnote(int num){
    struct node *tmp;
    if(head == NULL){
        head = malloc(sizeof(int));
        head->data = num;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else{
        tmp = malloc(sizeof(int));
        tmp->data = num;
        tmp->next = NULL;
        tmp->prev = last;
        last->next = tmp;
        last = tmp;
    }
}

void display(){
    struct node *p;
    int sum;

    if(head == NULL){
        printf("list is empty");
    }else{
        p = head;
        printf("\n");
        while(p != NULL){
            printf("%d ",p->data);
            p = p->next;
        }
    }
}

int main(){
    addnote(10);
    addnote(20);
    addnote(30);
    
    display();
}

