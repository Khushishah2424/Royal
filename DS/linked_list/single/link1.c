#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL , *last = NULL;

void addnote(int n){
    struct node *tmp;
    if(head == NULL){
        head = malloc(sizeof(struct node));
        head->data = n;
        head->next = NULL;
        last = head;
    }
    else{
        tmp = malloc(sizeof(struct node));
        tmp->data = n;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display(){
    struct node *p;
    if(p == NULL){
        printf("Empty");
    }
    else{
         p = head;
        while(p != NULL){
            printf("%d",p->data);
            p = p->next;
            printf(" ");
        }
    }

}

void anywhere(int key,int n){
    struct node *tmp,*p;
    p = head;
    while(p != NULL){
        if(p->data == key){
            break;
        }
        p=p->next;
    }
    if(p == NULL){
        printf("Invalid key PTA");
    }
    else{
        if(p == last){
            addnote(n);
        }
        else{
            tmp = malloc(sizeof(struct node));
            tmp->data = n;
            tmp->next = p->next;
            p->next = tmp;
        }
    }

}


int main(){
    addnote(100);
    addnote(200);
    addnote(300);
    addnote(400);
    // printf("%d %d %d",head->data,head->next->data,head->next->next->data);
    // display();
    // // addbeg(50);
    // display();
    // anywhere(200,150);
    display();


    return 0;
}